<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="encriptado.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
    <style type="text/css">
        #form1 {
            height: 485px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server" title="Encriptado">
        
         <div  style="margin: 30px 10px; background-color: #FCE51C; width: 601px;">
            <p style="margin-bottom: 5px" >
                &nbsp;</p>
            <asp:Label ID="LabelTex" runat="server" Text="Texto Plano: " style ="margin: 20px 30px 20px 10px;float:left" Height="20px" Width="99px"></asp:Label>
            <asp:TextBox ID="TextBTexto" runat="server" OnTextChanged="TextBTexto_TextChanged" style="margin: 10px 7px 10px 0px;" Width="433px" BorderStyle="Solid" Height="60px"></asp:TextBox>
        </div>
        <div style="height: 241px; width: 1170px">

                <asp:Panel ID="PEncInver"  runat="server" Height="180px"  style="margin: 10px 10px 20px 10px; position:center; float:left"  Width="190px" BorderStyle="Solid" BackColor="#FCE51C">
                        <br />
                        <asp:Label ID="PanelInver" runat="server"  Text="Transposición Inversa: "></asp:Label>
                        <asp:TextBox ID="TexBInver" runat="server"  Height="68px" style="margin:30px 5px 10px 10px" Width="159px"></asp:TextBox>
                </asp:Panel>

                <asp:Panel ID="PanelTrInxGrp" runat="server" BorderStyle="Solid" Height="180px" style="margin: 10px 12px 50px 10px; float:left" Width="200px" BackColor="#FCE51C">
                        <asp:Label ID="LabelTrasnG" runat="server" Text="Transposición Inversa por Grupo"></asp:Label>
                        <asp:Label ID="LabeInvGrup" runat="server" Height="27px" style="margin-left:1px" Text="Grupo: " Width="99px"></asp:Label>
                        <asp:ListBox ID="ListBGrup" runat="server" Height="23px" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged" style="margin-left:5px" Width="65
                        px">
                            <asp:ListItem>1</asp:ListItem>
                            <asp:ListItem>2</asp:ListItem>
                            <asp:ListItem>3</asp:ListItem>
                            <asp:ListItem>4</asp:ListItem>
                            <asp:ListItem>5</asp:ListItem>
                            <asp:ListItem>6</asp:ListItem>
                            <asp:ListItem>7</asp:ListItem>
                            <asp:ListItem>8</asp:ListItem>
                            <asp:ListItem>9</asp:ListItem>
                            <asp:ListItem>10</asp:ListItem>
                            <asp:ListItem>11</asp:ListItem>
                        </asp:ListBox>
                        <asp:TextBox ID="TextBGrup" runat="server" Height="68px" style="margin:30px 5px 10px 10px" Width="159px"></asp:TextBox>
                </asp:Panel>
                <asp:Panel ID="PEncrCesar" runat="server" BorderStyle="Solid" Height="180px" style="margin: 10px 30px 50px 10px; float:left"  TabIndex="900" Width="190px" BackColor="#FCE51C">
                    <asp:Label ID="LabeelCesar" runat="server" Text="Encriptacion Cesar"></asp:Label>
                    <br />
                    <asp:Label ID="LabelDesp" runat="server" Height="23px" Text="Desplazamiento: " width="65px"></asp:Label>
                    <asp:ListBox ID="ListBCesar" runat="server" Height="23px" style="margin-left:100px" Width="65px">
                        <asp:ListItem>1</asp:ListItem>
                        <asp:ListItem>2</asp:ListItem>
                        <asp:ListItem>3</asp:ListItem>
                        <asp:ListItem>4</asp:ListItem>
                        <asp:ListItem>5</asp:ListItem>
                        <asp:ListItem>6</asp:ListItem>
                        <asp:ListItem>7</asp:ListItem>
                        <asp:ListItem>8</asp:ListItem>
                        <asp:ListItem>8</asp:ListItem>
                        <asp:ListItem>9</asp:ListItem>
                        <asp:ListItem>10</asp:ListItem>
                        <asp:ListItem>11</asp:ListItem>
                    </asp:ListBox>
                    <asp:TextBox ID="TexBCesar" runat="server" Height="68px" style="margin:30px 5px 10px 10px" Width="159px"></asp:TextBox>
            
                </asp:Panel>

          </div>
    </form>
</body>
</html>
