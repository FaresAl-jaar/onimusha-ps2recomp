#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00250FC8
// Address: 0x250fc8 - 0x2511a4
void sub_00250FC8_0x250fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250FC8_0x250fc8");
#endif

    switch (ctx->pc) {
        case 0x250fc8u: goto label_250fc8;
        case 0x250fccu: goto label_250fcc;
        case 0x250fd0u: goto label_250fd0;
        case 0x250fd4u: goto label_250fd4;
        case 0x250fd8u: goto label_250fd8;
        case 0x250fdcu: goto label_250fdc;
        case 0x250fe0u: goto label_250fe0;
        case 0x250fe4u: goto label_250fe4;
        case 0x250fe8u: goto label_250fe8;
        case 0x250fecu: goto label_250fec;
        case 0x250ff0u: goto label_250ff0;
        case 0x250ff4u: goto label_250ff4;
        case 0x250ff8u: goto label_250ff8;
        case 0x250ffcu: goto label_250ffc;
        case 0x251000u: goto label_251000;
        case 0x251004u: goto label_251004;
        case 0x251008u: goto label_251008;
        case 0x25100cu: goto label_25100c;
        case 0x251010u: goto label_251010;
        case 0x251014u: goto label_251014;
        case 0x251018u: goto label_251018;
        case 0x25101cu: goto label_25101c;
        case 0x251020u: goto label_251020;
        case 0x251024u: goto label_251024;
        case 0x251028u: goto label_251028;
        case 0x25102cu: goto label_25102c;
        case 0x251030u: goto label_251030;
        case 0x251034u: goto label_251034;
        case 0x251038u: goto label_251038;
        case 0x25103cu: goto label_25103c;
        case 0x251040u: goto label_251040;
        case 0x251044u: goto label_251044;
        case 0x251048u: goto label_251048;
        case 0x25104cu: goto label_25104c;
        case 0x251050u: goto label_251050;
        case 0x251054u: goto label_251054;
        case 0x251058u: goto label_251058;
        case 0x25105cu: goto label_25105c;
        case 0x251060u: goto label_251060;
        case 0x251064u: goto label_251064;
        case 0x251068u: goto label_251068;
        case 0x25106cu: goto label_25106c;
        case 0x251070u: goto label_251070;
        case 0x251074u: goto label_251074;
        case 0x251078u: goto label_251078;
        case 0x25107cu: goto label_25107c;
        case 0x251080u: goto label_251080;
        case 0x251084u: goto label_251084;
        case 0x251088u: goto label_251088;
        case 0x25108cu: goto label_25108c;
        case 0x251090u: goto label_251090;
        case 0x251094u: goto label_251094;
        case 0x251098u: goto label_251098;
        case 0x25109cu: goto label_25109c;
        case 0x2510a0u: goto label_2510a0;
        case 0x2510a4u: goto label_2510a4;
        case 0x2510a8u: goto label_2510a8;
        case 0x2510acu: goto label_2510ac;
        case 0x2510b0u: goto label_2510b0;
        case 0x2510b4u: goto label_2510b4;
        case 0x2510b8u: goto label_2510b8;
        case 0x2510bcu: goto label_2510bc;
        case 0x2510c0u: goto label_2510c0;
        case 0x2510c4u: goto label_2510c4;
        case 0x2510c8u: goto label_2510c8;
        case 0x2510ccu: goto label_2510cc;
        case 0x2510d0u: goto label_2510d0;
        case 0x2510d4u: goto label_2510d4;
        case 0x2510d8u: goto label_2510d8;
        case 0x2510dcu: goto label_2510dc;
        case 0x2510e0u: goto label_2510e0;
        case 0x2510e4u: goto label_2510e4;
        case 0x2510e8u: goto label_2510e8;
        case 0x2510ecu: goto label_2510ec;
        case 0x2510f0u: goto label_2510f0;
        case 0x2510f4u: goto label_2510f4;
        case 0x2510f8u: goto label_2510f8;
        case 0x2510fcu: goto label_2510fc;
        case 0x251100u: goto label_251100;
        case 0x251104u: goto label_251104;
        case 0x251108u: goto label_251108;
        case 0x25110cu: goto label_25110c;
        case 0x251110u: goto label_251110;
        case 0x251114u: goto label_251114;
        case 0x251118u: goto label_251118;
        case 0x25111cu: goto label_25111c;
        case 0x251120u: goto label_251120;
        case 0x251124u: goto label_251124;
        case 0x251128u: goto label_251128;
        case 0x25112cu: goto label_25112c;
        case 0x251130u: goto label_251130;
        case 0x251134u: goto label_251134;
        case 0x251138u: goto label_251138;
        case 0x25113cu: goto label_25113c;
        case 0x251140u: goto label_251140;
        case 0x251144u: goto label_251144;
        case 0x251148u: goto label_251148;
        case 0x25114cu: goto label_25114c;
        case 0x251150u: goto label_251150;
        case 0x251154u: goto label_251154;
        case 0x251158u: goto label_251158;
        case 0x25115cu: goto label_25115c;
        case 0x251160u: goto label_251160;
        case 0x251164u: goto label_251164;
        case 0x251168u: goto label_251168;
        case 0x25116cu: goto label_25116c;
        case 0x251170u: goto label_251170;
        case 0x251174u: goto label_251174;
        case 0x251178u: goto label_251178;
        case 0x25117cu: goto label_25117c;
        case 0x251180u: goto label_251180;
        case 0x251184u: goto label_251184;
        case 0x251188u: goto label_251188;
        case 0x25118cu: goto label_25118c;
        case 0x251190u: goto label_251190;
        case 0x251194u: goto label_251194;
        case 0x251198u: goto label_251198;
        case 0x25119cu: goto label_25119c;
        case 0x2511a0u: goto label_2511a0;
        default: break;
    }

    ctx->pc = 0x250fc8u;

label_250fc8:
    // 0x250fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_250fcc:
    // 0x250fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_250fd0:
    // 0x250fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250fd4:
    // 0x250fd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_250fd8:
    // 0x250fd8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x250fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_250fdc:
    // 0x250fdc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_250fe0:
    if (ctx->pc == 0x250FE0u) {
        ctx->pc = 0x250FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FDCu;
        // 0x250fe0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FE4u;
        goto label_250fe4;
    }
    ctx->pc = 0x250FDCu;
    {
        const bool branch_taken_0x250fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x250FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FDCu;
        // 0x250fe0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fdc) {
            ctx->pc = 0x251008u;
            goto label_251008;
        }
    }
    ctx->pc = 0x250FE4u;
label_250fe4:
    // 0x250fe4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250fe8:
    // 0x250fe8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250fec:
    // 0x250fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250ff0:
    // 0x250ff0: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x250ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
label_250ff4:
    // 0x250ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_250ff8:
    // 0x250ff8: 0x24a5eb28  addiu       $a1, $a1, -0x14D8
    ctx->pc = 0x250ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
label_250ffc:
    // 0x250ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_251000:
    // 0x251000: 0x80941da  j           func_250768
label_251004:
    if (ctx->pc == 0x251004u) {
        ctx->pc = 0x251004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251000u;
        // 0x251004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251008u;
        goto label_251008;
    }
    ctx->pc = 0x251000u;
    ctx->pc = 0x251004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251000u;
    // 0x251004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x251008u;
label_251008:
    // 0x251008: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x251008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25100c:
    // 0x25100c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_251010:
    if (ctx->pc == 0x251010u) {
        ctx->pc = 0x251010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25100Cu;
        // 0x251010: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251014u;
        goto label_251014;
    }
    ctx->pc = 0x25100Cu;
    {
        const bool branch_taken_0x25100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25100c) {
            ctx->pc = 0x251010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25100Cu;
            // 0x251010: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251038u;
            goto label_251038;
        }
    }
    ctx->pc = 0x251014u;
label_251014:
    // 0x251014: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251018:
    // 0x251018: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_25101c:
    // 0x25101c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25101cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251020:
    // 0x251020: 0x2484ec10  addiu       $a0, $a0, -0x13F0
    ctx->pc = 0x251020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962192));
label_251024:
    // 0x251024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_251028:
    // 0x251028: 0x24a5eb58  addiu       $a1, $a1, -0x14A8
    ctx->pc = 0x251028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
label_25102c:
    // 0x25102c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_251030:
    // 0x251030: 0x80941da  j           func_250768
label_251034:
    if (ctx->pc == 0x251034u) {
        ctx->pc = 0x251034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251030u;
        // 0x251034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251038u;
        goto label_251038;
    }
    ctx->pc = 0x251030u;
    ctx->pc = 0x251034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251030u;
    // 0x251034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x251038u;
label_251038:
    // 0x251038: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_25103c:
    if (ctx->pc == 0x25103Cu) {
        ctx->pc = 0x25103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251038u;
        // 0x25103c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251040u;
        goto label_251040;
    }
    ctx->pc = 0x251038u;
    {
        const bool branch_taken_0x251038 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x251038) {
            ctx->pc = 0x25103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251038u;
            // 0x25103c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251068u;
            goto label_251068;
        }
    }
    ctx->pc = 0x251040u;
label_251040:
    // 0x251040: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251044:
    // 0x251044: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251048:
    // 0x251048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25104c:
    // 0x25104c: 0x2484ec20  addiu       $a0, $a0, -0x13E0
    ctx->pc = 0x25104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
label_251050:
    // 0x251050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_251054:
    // 0x251054: 0x24a5ebc8  addiu       $a1, $a1, -0x1438
    ctx->pc = 0x251054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962120));
label_251058:
    // 0x251058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25105c:
    // 0x25105c: 0x80941da  j           func_250768
label_251060:
    if (ctx->pc == 0x251060u) {
        ctx->pc = 0x251060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25105Cu;
        // 0x251060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251064u;
        goto label_251064;
    }
    ctx->pc = 0x25105Cu;
    ctx->pc = 0x251060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25105Cu;
    // 0x251060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x251064u;
label_251064:
    // 0x251064: 0x0  nop
    ctx->pc = 0x251064u;
    // NOP
label_251068:
    // 0x251068: 0x58e0004a  blezl       $a3, . + 4 + (0x4A << 2)
label_25106c:
    if (ctx->pc == 0x25106Cu) {
        ctx->pc = 0x25106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251068u;
        // 0x25106c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251070u;
        goto label_251070;
    }
    ctx->pc = 0x251068u;
    {
        const bool branch_taken_0x251068 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x251068) {
            ctx->pc = 0x25106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251068u;
            // 0x25106c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251194u;
            goto label_251194;
        }
    }
    ctx->pc = 0x251070u;
label_251070:
    // 0x251070: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x251070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_251074:
    // 0x251074: 0x51000047  beql        $t0, $zero, . + 4 + (0x47 << 2)
label_251078:
    if (ctx->pc == 0x251078u) {
        ctx->pc = 0x251078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251074u;
        // 0x251078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25107Cu;
        goto label_25107c;
    }
    ctx->pc = 0x251074u;
    {
        const bool branch_taken_0x251074 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x251074) {
            ctx->pc = 0x251078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251074u;
            // 0x251078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251194u;
            goto label_251194;
        }
    }
    ctx->pc = 0x25107Cu;
label_25107c:
    // 0x25107c: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_251080:
    if (ctx->pc == 0x251080u) {
        ctx->pc = 0x251080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25107Cu;
        // 0x251080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251084u;
        goto label_251084;
    }
    ctx->pc = 0x25107Cu;
    {
        const bool branch_taken_0x25107c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x251080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25107Cu;
        // 0x251080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25107c) {
            ctx->pc = 0x2510F8u;
            goto label_2510f8;
        }
    }
    ctx->pc = 0x251084u;
label_251084:
    // 0x251084: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x251084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_251088:
    // 0x251088: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_25108c:
    if (ctx->pc == 0x25108Cu) {
        ctx->pc = 0x25108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251088u;
        // 0x25108c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251090u;
        goto label_251090;
    }
    ctx->pc = 0x251088u;
    {
        const bool branch_taken_0x251088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x251088) {
            ctx->pc = 0x25108Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251088u;
            // 0x25108c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251090u;
            goto label_251090;
        }
    }
    ctx->pc = 0x251090u;
label_251090:
    // 0x251090: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x251090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_251094:
    // 0x251094: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x251094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_251098:
    // 0x251098: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x251098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_25109c:
    // 0x25109c: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x25109cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2510a0:
    // 0x2510a0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2510a0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2510a4:
    // 0x2510a4: 0x7066001a  div1        $zero, $v1, $a2
    ctx->pc = 0x2510a4u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_2510a8:
    // 0x2510a8: 0x2010  mfhi        $a0
    ctx->pc = 0x2510a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2510ac:
    // 0x2510ac: 0x70002810  mfhi1       $a1
    ctx->pc = 0x2510acu;
    SET_GPR_U64(ctx, 5, ctx->hi1);
label_2510b0:
    // 0x2510b0: 0x54850007  bnel        $a0, $a1, . + 4 + (0x7 << 2)
label_2510b4:
    if (ctx->pc == 0x2510B4u) {
        ctx->pc = 0x2510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510B0u;
        // 0x2510b4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510B8u;
        goto label_2510b8;
    }
    ctx->pc = 0x2510B0u;
    {
        const bool branch_taken_0x2510b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2510b0) {
            ctx->pc = 0x2510B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510B0u;
            // 0x2510b4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2510D0u;
            goto label_2510d0;
        }
    }
    ctx->pc = 0x2510B8u;
label_2510b8:
    // 0x2510b8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2510b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_2510bc:
    // 0x2510bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2510bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2510c0:
    // 0x2510c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2510c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2510c4:
    // 0x2510c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2510c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2510c8:
    // 0x2510c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2510cc:
    if (ctx->pc == 0x2510CCu) {
        ctx->pc = 0x2510CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510C8u;
        // 0x2510cc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510D0u;
        goto label_2510d0;
    }
    ctx->pc = 0x2510C8u;
    {
        const bool branch_taken_0x2510c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510C8u;
        // 0x2510cc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510c8) {
            ctx->pc = 0x2510E4u;
            goto label_2510e4;
        }
    }
    ctx->pc = 0x2510D0u;
label_2510d0:
    // 0x2510d0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2510d4:
    if (ctx->pc == 0x2510D4u) {
        ctx->pc = 0x2510D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510D0u;
        // 0x2510d4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510D8u;
        goto label_2510d8;
    }
    ctx->pc = 0x2510D0u;
    {
        const bool branch_taken_0x2510d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510d0) {
            ctx->pc = 0x2510D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510D0u;
            // 0x2510d4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2510ECu;
            goto label_2510ec;
        }
    }
    ctx->pc = 0x2510D8u;
label_2510d8:
    // 0x2510d8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2510d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2510dc:
    // 0x2510dc: 0x40f809  jalr        $v0
label_2510e0:
    if (ctx->pc == 0x2510E0u) {
        ctx->pc = 0x2510E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510DCu;
        // 0x2510e0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510E4u;
        goto label_2510e4;
    }
    ctx->pc = 0x2510DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2510E4u);
        ctx->pc = 0x2510E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510DCu;
        // 0x2510e0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2510DCu, 0x2510E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2510E4u;
label_2510e4:
    // 0x2510e4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2510e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2510e8:
    // 0x2510e8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2510e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2510ec:
    // 0x2510ec: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2510ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2510f0:
    // 0x2510f0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2510f4:
    if (ctx->pc == 0x2510F4u) {
        ctx->pc = 0x2510F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510F0u;
        // 0x2510f4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510F8u;
        goto label_2510f8;
    }
    ctx->pc = 0x2510F0u;
    {
        const bool branch_taken_0x2510f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510F0u;
        // 0x2510f4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510f0) {
            ctx->pc = 0x251190u;
            goto label_251190;
        }
    }
    ctx->pc = 0x2510F8u;
label_2510f8:
    // 0x2510f8: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_2510fc:
    if (ctx->pc == 0x2510FCu) {
        ctx->pc = 0x2510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510F8u;
        // 0x2510fc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251100u;
        goto label_251100;
    }
    ctx->pc = 0x2510F8u;
    {
        const bool branch_taken_0x2510f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2510f8) {
            ctx->pc = 0x2510FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510F8u;
            // 0x2510fc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251178u;
            goto label_251178;
        }
    }
    ctx->pc = 0x251100u;
label_251100:
    // 0x251100: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x251100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_251104:
    // 0x251104: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_251108:
    if (ctx->pc == 0x251108u) {
        ctx->pc = 0x251108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251104u;
        // 0x251108: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25110Cu;
        goto label_25110c;
    }
    ctx->pc = 0x251104u;
    {
        const bool branch_taken_0x251104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x251104) {
            ctx->pc = 0x251108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251104u;
            // 0x251108: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25110Cu;
            goto label_25110c;
        }
    }
    ctx->pc = 0x25110Cu;
label_25110c:
    // 0x25110c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x25110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_251110:
    // 0x251110: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x251110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_251114:
    // 0x251114: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x251114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_251118:
    // 0x251118: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x251118u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_25111c:
    // 0x25111c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x25111cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_251120:
    // 0x251120: 0x7086001a  div1        $zero, $a0, $a2
    ctx->pc = 0x251120u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_251124:
    // 0x251124: 0x1010  mfhi        $v0
    ctx->pc = 0x251124u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_251128:
    // 0x251128: 0x70001810  mfhi1       $v1
    ctx->pc = 0x251128u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
label_25112c:
    // 0x25112c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_251130:
    if (ctx->pc == 0x251130u) {
        ctx->pc = 0x251130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25112Cu;
        // 0x251130: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251134u;
        goto label_251134;
    }
    ctx->pc = 0x25112Cu;
    {
        const bool branch_taken_0x25112c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25112c) {
            ctx->pc = 0x251130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25112Cu;
            // 0x251130: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251150u;
            goto label_251150;
        }
    }
    ctx->pc = 0x251134u;
label_251134:
    // 0x251134: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x251134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_251138:
    // 0x251138: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x251138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_25113c:
    // 0x25113c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_251140:
    // 0x251140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251144:
    // 0x251144: 0x10000007  b           . + 4 + (0x7 << 2)
label_251148:
    if (ctx->pc == 0x251148u) {
        ctx->pc = 0x251148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251144u;
        // 0x251148: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25114Cu;
        goto label_25114c;
    }
    ctx->pc = 0x251144u;
    {
        const bool branch_taken_0x251144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251144u;
        // 0x251148: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251144) {
            ctx->pc = 0x251164u;
            goto label_251164;
        }
    }
    ctx->pc = 0x25114Cu;
label_25114c:
    // 0x25114c: 0x0  nop
    ctx->pc = 0x25114cu;
    // NOP
label_251150:
    // 0x251150: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_251154:
    if (ctx->pc == 0x251154u) {
        ctx->pc = 0x251154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251150u;
        // 0x251154: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251158u;
        goto label_251158;
    }
    ctx->pc = 0x251150u;
    {
        const bool branch_taken_0x251150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251150) {
            ctx->pc = 0x251154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251150u;
            // 0x251154: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25116Cu;
            goto label_25116c;
        }
    }
    ctx->pc = 0x251158u;
label_251158:
    // 0x251158: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x251158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_25115c:
    // 0x25115c: 0x40f809  jalr        $v0
label_251160:
    if (ctx->pc == 0x251160u) {
        ctx->pc = 0x251160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25115Cu;
        // 0x251160: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251164u;
        goto label_251164;
    }
    ctx->pc = 0x25115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251164u);
        ctx->pc = 0x251160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25115Cu;
        // 0x251160: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25115Cu, 0x251164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251164u;
label_251164:
    // 0x251164: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x251164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_251168:
    // 0x251168: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x251168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_25116c:
    // 0x25116c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x25116cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_251170:
    // 0x251170: 0x10000007  b           . + 4 + (0x7 << 2)
label_251174:
    if (ctx->pc == 0x251174u) {
        ctx->pc = 0x251174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251170u;
        // 0x251174: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251178u;
        goto label_251178;
    }
    ctx->pc = 0x251170u;
    {
        const bool branch_taken_0x251170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251170u;
        // 0x251174: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251170) {
            ctx->pc = 0x251190u;
            goto label_251190;
        }
    }
    ctx->pc = 0x251178u;
label_251178:
    // 0x251178: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x251178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_25117c:
    // 0x25117c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_251180:
    if (ctx->pc == 0x251180u) {
        ctx->pc = 0x251180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25117Cu;
        // 0x251180: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251184u;
        goto label_251184;
    }
    ctx->pc = 0x25117Cu;
    {
        const bool branch_taken_0x25117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25117Cu;
        // 0x251180: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25117c) {
            ctx->pc = 0x251190u;
            goto label_251190;
        }
    }
    ctx->pc = 0x251184u;
label_251184:
    // 0x251184: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x251184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_251188:
    // 0x251188: 0x40f809  jalr        $v0
label_25118c:
    if (ctx->pc == 0x25118Cu) {
        ctx->pc = 0x25118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251188u;
        // 0x25118c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251190u;
        goto label_251190;
    }
    ctx->pc = 0x251188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251190u);
        ctx->pc = 0x25118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251188u;
        // 0x25118c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251188u, 0x251190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251190u;
label_251190:
    // 0x251190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251194:
    // 0x251194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_251198:
    // 0x251198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25119c:
    // 0x25119c: 0x3e00008  jr          $ra
label_2511a0:
    if (ctx->pc == 0x2511A0u) {
        ctx->pc = 0x2511A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25119Cu;
        // 0x2511a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511A4u;
        goto label_fallthrough_0x25119c;
    }
    ctx->pc = 0x25119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2511A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25119Cu;
        // 0x2511a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25119c:
    ctx->pc = 0x2511A4u;
}
