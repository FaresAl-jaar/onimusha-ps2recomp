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

// Function: sub_003DFED0
// Address: 0x3dfed0 - 0x3e01dc
void sub_003DFED0_0x3dfed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFED0_0x3dfed0");
#endif

    switch (ctx->pc) {
        case 0x3dfed0u: goto label_3dfed0;
        case 0x3dfed4u: goto label_3dfed4;
        case 0x3dfed8u: goto label_3dfed8;
        case 0x3dfedcu: goto label_3dfedc;
        case 0x3dfee0u: goto label_3dfee0;
        case 0x3dfee4u: goto label_3dfee4;
        case 0x3dfee8u: goto label_3dfee8;
        case 0x3dfeecu: goto label_3dfeec;
        case 0x3dfef0u: goto label_3dfef0;
        case 0x3dfef4u: goto label_3dfef4;
        case 0x3dfef8u: goto label_3dfef8;
        case 0x3dfefcu: goto label_3dfefc;
        case 0x3dff00u: goto label_3dff00;
        case 0x3dff04u: goto label_3dff04;
        case 0x3dff08u: goto label_3dff08;
        case 0x3dff0cu: goto label_3dff0c;
        case 0x3dff10u: goto label_3dff10;
        case 0x3dff14u: goto label_3dff14;
        case 0x3dff18u: goto label_3dff18;
        case 0x3dff1cu: goto label_3dff1c;
        case 0x3dff20u: goto label_3dff20;
        case 0x3dff24u: goto label_3dff24;
        case 0x3dff28u: goto label_3dff28;
        case 0x3dff2cu: goto label_3dff2c;
        case 0x3dff30u: goto label_3dff30;
        case 0x3dff34u: goto label_3dff34;
        case 0x3dff38u: goto label_3dff38;
        case 0x3dff3cu: goto label_3dff3c;
        case 0x3dff40u: goto label_3dff40;
        case 0x3dff44u: goto label_3dff44;
        case 0x3dff48u: goto label_3dff48;
        case 0x3dff4cu: goto label_3dff4c;
        case 0x3dff50u: goto label_3dff50;
        case 0x3dff54u: goto label_3dff54;
        case 0x3dff58u: goto label_3dff58;
        case 0x3dff5cu: goto label_3dff5c;
        case 0x3dff60u: goto label_3dff60;
        case 0x3dff64u: goto label_3dff64;
        case 0x3dff68u: goto label_3dff68;
        case 0x3dff6cu: goto label_3dff6c;
        case 0x3dff70u: goto label_3dff70;
        case 0x3dff74u: goto label_3dff74;
        case 0x3dff78u: goto label_3dff78;
        case 0x3dff7cu: goto label_3dff7c;
        case 0x3dff80u: goto label_3dff80;
        case 0x3dff84u: goto label_3dff84;
        case 0x3dff88u: goto label_3dff88;
        case 0x3dff8cu: goto label_3dff8c;
        case 0x3dff90u: goto label_3dff90;
        case 0x3dff94u: goto label_3dff94;
        case 0x3dff98u: goto label_3dff98;
        case 0x3dff9cu: goto label_3dff9c;
        case 0x3dffa0u: goto label_3dffa0;
        case 0x3dffa4u: goto label_3dffa4;
        case 0x3dffa8u: goto label_3dffa8;
        case 0x3dffacu: goto label_3dffac;
        case 0x3dffb0u: goto label_3dffb0;
        case 0x3dffb4u: goto label_3dffb4;
        case 0x3dffb8u: goto label_3dffb8;
        case 0x3dffbcu: goto label_3dffbc;
        case 0x3dffc0u: goto label_3dffc0;
        case 0x3dffc4u: goto label_3dffc4;
        case 0x3dffc8u: goto label_3dffc8;
        case 0x3dffccu: goto label_3dffcc;
        case 0x3dffd0u: goto label_3dffd0;
        case 0x3dffd4u: goto label_3dffd4;
        case 0x3dffd8u: goto label_3dffd8;
        case 0x3dffdcu: goto label_3dffdc;
        case 0x3dffe0u: goto label_3dffe0;
        case 0x3dffe4u: goto label_3dffe4;
        case 0x3dffe8u: goto label_3dffe8;
        case 0x3dffecu: goto label_3dffec;
        case 0x3dfff0u: goto label_3dfff0;
        case 0x3dfff4u: goto label_3dfff4;
        case 0x3dfff8u: goto label_3dfff8;
        case 0x3dfffcu: goto label_3dfffc;
        case 0x3e0000u: goto label_3e0000;
        case 0x3e0004u: goto label_3e0004;
        case 0x3e0008u: goto label_3e0008;
        case 0x3e000cu: goto label_3e000c;
        case 0x3e0010u: goto label_3e0010;
        case 0x3e0014u: goto label_3e0014;
        case 0x3e0018u: goto label_3e0018;
        case 0x3e001cu: goto label_3e001c;
        case 0x3e0020u: goto label_3e0020;
        case 0x3e0024u: goto label_3e0024;
        case 0x3e0028u: goto label_3e0028;
        case 0x3e002cu: goto label_3e002c;
        case 0x3e0030u: goto label_3e0030;
        case 0x3e0034u: goto label_3e0034;
        case 0x3e0038u: goto label_3e0038;
        case 0x3e003cu: goto label_3e003c;
        case 0x3e0040u: goto label_3e0040;
        case 0x3e0044u: goto label_3e0044;
        case 0x3e0048u: goto label_3e0048;
        case 0x3e004cu: goto label_3e004c;
        case 0x3e0050u: goto label_3e0050;
        case 0x3e0054u: goto label_3e0054;
        case 0x3e0058u: goto label_3e0058;
        case 0x3e005cu: goto label_3e005c;
        case 0x3e0060u: goto label_3e0060;
        case 0x3e0064u: goto label_3e0064;
        case 0x3e0068u: goto label_3e0068;
        case 0x3e006cu: goto label_3e006c;
        case 0x3e0070u: goto label_3e0070;
        case 0x3e0074u: goto label_3e0074;
        case 0x3e0078u: goto label_3e0078;
        case 0x3e007cu: goto label_3e007c;
        case 0x3e0080u: goto label_3e0080;
        case 0x3e0084u: goto label_3e0084;
        case 0x3e0088u: goto label_3e0088;
        case 0x3e008cu: goto label_3e008c;
        case 0x3e0090u: goto label_3e0090;
        case 0x3e0094u: goto label_3e0094;
        case 0x3e0098u: goto label_3e0098;
        case 0x3e009cu: goto label_3e009c;
        case 0x3e00a0u: goto label_3e00a0;
        case 0x3e00a4u: goto label_3e00a4;
        case 0x3e00a8u: goto label_3e00a8;
        case 0x3e00acu: goto label_3e00ac;
        case 0x3e00b0u: goto label_3e00b0;
        case 0x3e00b4u: goto label_3e00b4;
        case 0x3e00b8u: goto label_3e00b8;
        case 0x3e00bcu: goto label_3e00bc;
        case 0x3e00c0u: goto label_3e00c0;
        case 0x3e00c4u: goto label_3e00c4;
        case 0x3e00c8u: goto label_3e00c8;
        case 0x3e00ccu: goto label_3e00cc;
        case 0x3e00d0u: goto label_3e00d0;
        case 0x3e00d4u: goto label_3e00d4;
        case 0x3e00d8u: goto label_3e00d8;
        case 0x3e00dcu: goto label_3e00dc;
        case 0x3e00e0u: goto label_3e00e0;
        case 0x3e00e4u: goto label_3e00e4;
        case 0x3e00e8u: goto label_3e00e8;
        case 0x3e00ecu: goto label_3e00ec;
        case 0x3e00f0u: goto label_3e00f0;
        case 0x3e00f4u: goto label_3e00f4;
        case 0x3e00f8u: goto label_3e00f8;
        case 0x3e00fcu: goto label_3e00fc;
        case 0x3e0100u: goto label_3e0100;
        case 0x3e0104u: goto label_3e0104;
        case 0x3e0108u: goto label_3e0108;
        case 0x3e010cu: goto label_3e010c;
        case 0x3e0110u: goto label_3e0110;
        case 0x3e0114u: goto label_3e0114;
        case 0x3e0118u: goto label_3e0118;
        case 0x3e011cu: goto label_3e011c;
        case 0x3e0120u: goto label_3e0120;
        case 0x3e0124u: goto label_3e0124;
        case 0x3e0128u: goto label_3e0128;
        case 0x3e012cu: goto label_3e012c;
        case 0x3e0130u: goto label_3e0130;
        case 0x3e0134u: goto label_3e0134;
        case 0x3e0138u: goto label_3e0138;
        case 0x3e013cu: goto label_3e013c;
        case 0x3e0140u: goto label_3e0140;
        case 0x3e0144u: goto label_3e0144;
        case 0x3e0148u: goto label_3e0148;
        case 0x3e014cu: goto label_3e014c;
        case 0x3e0150u: goto label_3e0150;
        case 0x3e0154u: goto label_3e0154;
        case 0x3e0158u: goto label_3e0158;
        case 0x3e015cu: goto label_3e015c;
        case 0x3e0160u: goto label_3e0160;
        case 0x3e0164u: goto label_3e0164;
        case 0x3e0168u: goto label_3e0168;
        case 0x3e016cu: goto label_3e016c;
        case 0x3e0170u: goto label_3e0170;
        case 0x3e0174u: goto label_3e0174;
        case 0x3e0178u: goto label_3e0178;
        case 0x3e017cu: goto label_3e017c;
        case 0x3e0180u: goto label_3e0180;
        case 0x3e0184u: goto label_3e0184;
        case 0x3e0188u: goto label_3e0188;
        case 0x3e018cu: goto label_3e018c;
        case 0x3e0190u: goto label_3e0190;
        case 0x3e0194u: goto label_3e0194;
        case 0x3e0198u: goto label_3e0198;
        case 0x3e019cu: goto label_3e019c;
        case 0x3e01a0u: goto label_3e01a0;
        case 0x3e01a4u: goto label_3e01a4;
        case 0x3e01a8u: goto label_3e01a8;
        case 0x3e01acu: goto label_3e01ac;
        case 0x3e01b0u: goto label_3e01b0;
        case 0x3e01b4u: goto label_3e01b4;
        case 0x3e01b8u: goto label_3e01b8;
        case 0x3e01bcu: goto label_3e01bc;
        case 0x3e01c0u: goto label_3e01c0;
        case 0x3e01c4u: goto label_3e01c4;
        case 0x3e01c8u: goto label_3e01c8;
        case 0x3e01ccu: goto label_3e01cc;
        case 0x3e01d0u: goto label_3e01d0;
        case 0x3e01d4u: goto label_3e01d4;
        case 0x3e01d8u: goto label_3e01d8;
        default: break;
    }

    ctx->pc = 0x3dfed0u;

label_3dfed0:
    // 0x3dfed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dfed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dfed4:
    // 0x3dfed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dfed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dfed8:
    // 0x3dfed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dfed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dfedc:
    // 0x3dfedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dfedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfee0:
    // 0x3dfee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dfee4:
    // 0x3dfee4: 0x8e252b18  lw          $a1, 0x2B18($s1)
    ctx->pc = 0x3dfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11032)));
label_3dfee8:
    // 0x3dfee8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3dfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_3dfeec:
    // 0x3dfeec: 0xc07cce0  jal         func_1F3380
label_3dfef0:
    if (ctx->pc == 0x3DFEF0u) {
        ctx->pc = 0x3DFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEECu;
        // 0x3dfef0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFEF4u;
        goto label_3dfef4;
    }
    ctx->pc = 0x3DFEECu;
    SET_GPR_U32(ctx, 31, 0x3DFEF4u);
    ctx->pc = 0x3DFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFEECu;
    // 0x3dfef0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DFEECu, 0x3DFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFEF4u;
label_3dfef4:
    // 0x3dfef4: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3dfef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
label_3dfef8:
    // 0x3dfef8: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3dfef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3dfefc:
    // 0x3dfefc: 0x102000b2  beqz        $at, . + 4 + (0xB2 << 2)
label_3dff00:
    if (ctx->pc == 0x3DFF00u) {
        ctx->pc = 0x3DFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEFCu;
        // 0x3dff00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF04u;
        goto label_3dff04;
    }
    ctx->pc = 0x3DFEFCu;
    {
        const bool branch_taken_0x3dfefc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEFCu;
        // 0x3dff00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfefc) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3DFF04u;
label_3dff04:
    // 0x3dff04: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3dff04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_3dff08:
    // 0x3dff08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dff0c:
    // 0x3dff0c: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x3dff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
label_3dff10:
    // 0x3dff10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3dff14:
    // 0x3dff14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dff18:
    // 0x3dff18: 0x600008  jr          $v1
label_3dff1c:
    if (ctx->pc == 0x3DFF1Cu) {
        ctx->pc = 0x3DFF20u;
        goto label_3dff20;
    }
    ctx->pc = 0x3DFF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DFF20u: goto label_3dff20;
            case 0x3DFF68u: goto label_3dff68;
            case 0x3E0070u: goto label_3e0070;
            case 0x3E0118u: goto label_3e0118;
            case 0x3E0130u: goto label_3e0130;
            case 0x3E01A8u: goto label_3e01a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFF18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DFF20u;
label_3dff20:
    // 0x3dff20: 0xc0f80f8  jal         func_3E03E0
label_3dff24:
    if (ctx->pc == 0x3DFF24u) {
        ctx->pc = 0x3DFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF20u;
        // 0x3dff24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF28u;
        goto label_3dff28;
    }
    ctx->pc = 0x3DFF20u;
    SET_GPR_U32(ctx, 31, 0x3DFF28u);
    ctx->pc = 0x3DFF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFF20u;
    // 0x3dff24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E03E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E03E0u, 0x3DFF20u, 0x3DFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF28u;
label_3dff28:
    // 0x3dff28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dff2c:
    // 0x3dff2c: 0xc0f8118  jal         func_3E0460
label_3dff30:
    if (ctx->pc == 0x3DFF30u) {
        ctx->pc = 0x3DFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF2Cu;
        // 0x3dff30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF34u;
        goto label_3dff34;
    }
    ctx->pc = 0x3DFF2Cu;
    SET_GPR_U32(ctx, 31, 0x3DFF34u);
    ctx->pc = 0x3DFF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFF2Cu;
    // 0x3dff30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0460u, 0x3DFF2Cu, 0x3DFF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF34u;
label_3dff34:
    // 0x3dff34: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3dff34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3dff38:
    // 0x3dff38: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3dff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3dff3c:
    // 0x3dff3c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3dff3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3dff40:
    // 0x3dff40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3dff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3dff44:
    // 0x3dff44: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3dff44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3dff48:
    // 0x3dff48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dff48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3dff4c:
    // 0x3dff4c: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x3dff4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_3dff50:
    // 0x3dff50: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3dff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3dff54:
    // 0x3dff54: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3dff54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_3dff58:
    // 0x3dff58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dff5c:
    // 0x3dff5c: 0x1000009a  b           . + 4 + (0x9A << 2)
label_3dff60:
    if (ctx->pc == 0x3DFF60u) {
        ctx->pc = 0x3DFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF5Cu;
        // 0x3dff60: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF64u;
        goto label_3dff64;
    }
    ctx->pc = 0x3DFF5Cu;
    {
        const bool branch_taken_0x3dff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF5Cu;
        // 0x3dff60: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff5c) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3DFF64u;
label_3dff64:
    // 0x3dff64: 0x0  nop
    ctx->pc = 0x3dff64u;
    // NOP
label_3dff68:
    // 0x3dff68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dff6c:
    // 0x3dff6c: 0xc0f8118  jal         func_3E0460
label_3dff70:
    if (ctx->pc == 0x3DFF70u) {
        ctx->pc = 0x3DFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF6Cu;
        // 0x3dff70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFF74u;
        goto label_3dff74;
    }
    ctx->pc = 0x3DFF6Cu;
    SET_GPR_U32(ctx, 31, 0x3DFF74u);
    ctx->pc = 0x3DFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFF6Cu;
    // 0x3dff70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0460u, 0x3DFF6Cu, 0x3DFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFF74u;
label_3dff74:
    // 0x3dff74: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3dff74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_3dff78:
    // 0x3dff78: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
label_3dff7c:
    if (ctx->pc == 0x3DFF7Cu) {
        ctx->pc = 0x3DFF80u;
        goto label_3dff80;
    }
    ctx->pc = 0x3DFF78u;
    {
        const bool branch_taken_0x3dff78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dff78) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3DFF80u;
label_3dff80:
    // 0x3dff80: 0x92232c70  lbu         $v1, 0x2C70($s1)
    ctx->pc = 0x3dff80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11376)));
label_3dff84:
    // 0x3dff84: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_3dff88:
    if (ctx->pc == 0x3DFF88u) {
        ctx->pc = 0x3DFF8Cu;
        goto label_3dff8c;
    }
    ctx->pc = 0x3DFF84u;
    {
        const bool branch_taken_0x3dff84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dff84) {
            ctx->pc = 0x3DFFD0u;
            goto label_3dffd0;
        }
    }
    ctx->pc = 0x3DFF8Cu;
label_3dff8c:
    // 0x3dff8c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3dff8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3dff90:
    // 0x3dff90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dff90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3dff94:
    // 0x3dff94: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x3dff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3dff98:
    // 0x3dff98: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3dff98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3dff9c:
    // 0x3dff9c: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3dff9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_3dffa0:
    // 0x3dffa0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3dffa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3dffa4:
    // 0x3dffa4: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3dffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_3dffa8:
    // 0x3dffa8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3dffac:
    if (ctx->pc == 0x3DFFACu) {
        ctx->pc = 0x3DFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFA8u;
        // 0x3dffac: 0xae2307ec  sw          $v1, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFB0u;
        goto label_3dffb0;
    }
    ctx->pc = 0x3DFFA8u;
    {
        const bool branch_taken_0x3dffa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFA8u;
        // 0x3dffac: 0xae2307ec  sw          $v1, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dffa8) {
            ctx->pc = 0x3DFFC0u;
            goto label_3dffc0;
        }
    }
    ctx->pc = 0x3DFFB0u;
label_3dffb0:
    // 0x3dffb0: 0x92252c73  lbu         $a1, 0x2C73($s1)
    ctx->pc = 0x3dffb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11379)));
label_3dffb4:
    // 0x3dffb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dffb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dffb8:
    // 0x3dffb8: 0xc0f5924  jal         func_3D6490
label_3dffbc:
    if (ctx->pc == 0x3DFFBCu) {
        ctx->pc = 0x3DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFB8u;
        // 0x3dffbc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFC0u;
        goto label_3dffc0;
    }
    ctx->pc = 0x3DFFB8u;
    SET_GPR_U32(ctx, 31, 0x3DFFC0u);
    ctx->pc = 0x3DFFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFFB8u;
    // 0x3dffbc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6490u, 0x3DFFB8u, 0x3DFFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFFC0u;
label_3dffc0:
    // 0x3dffc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dffc4:
    // 0x3dffc4: 0x10000080  b           . + 4 + (0x80 << 2)
label_3dffc8:
    if (ctx->pc == 0x3DFFC8u) {
        ctx->pc = 0x3DFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFC4u;
        // 0x3dffc8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFCCu;
        goto label_3dffcc;
    }
    ctx->pc = 0x3DFFC4u;
    {
        const bool branch_taken_0x3dffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFC4u;
        // 0x3dffc8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dffc4) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3DFFCCu;
label_3dffcc:
    // 0x3dffcc: 0x0  nop
    ctx->pc = 0x3dffccu;
    // NOP
label_3dffd0:
    // 0x3dffd0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3dffd4:
    if (ctx->pc == 0x3DFFD4u) {
        ctx->pc = 0x3DFFD8u;
        goto label_3dffd8;
    }
    ctx->pc = 0x3DFFD0u;
    {
        const bool branch_taken_0x3dffd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dffd0) {
            ctx->pc = 0x3DFFE8u;
            goto label_3dffe8;
        }
    }
    ctx->pc = 0x3DFFD8u;
label_3dffd8:
    // 0x3dffd8: 0x92252c73  lbu         $a1, 0x2C73($s1)
    ctx->pc = 0x3dffd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11379)));
label_3dffdc:
    // 0x3dffdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dffdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dffe0:
    // 0x3dffe0: 0xc0f5924  jal         func_3D6490
label_3dffe4:
    if (ctx->pc == 0x3DFFE4u) {
        ctx->pc = 0x3DFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFE0u;
        // 0x3dffe4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFE8u;
        goto label_3dffe8;
    }
    ctx->pc = 0x3DFFE0u;
    SET_GPR_U32(ctx, 31, 0x3DFFE8u);
    ctx->pc = 0x3DFFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFFE0u;
    // 0x3dffe4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6490u, 0x3DFFE0u, 0x3DFFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFFE8u;
label_3dffe8:
    // 0x3dffe8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x3dffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_3dffec:
    // 0x3dffec: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3dffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dfff0:
    // 0x3dfff0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dfff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dfff4:
    // 0x3dfff4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3dfff8:
    // 0x3dfff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dfff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfffc:
    // 0x3dfffc: 0x0  nop
    ctx->pc = 0x3dfffcu;
    // NOP
label_3e0000:
    // 0x3e0000: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3e0000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3e0004:
    // 0x3e0004: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e0004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e0008:
    // 0x3e0008: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3e000c:
    if (ctx->pc == 0x3E000Cu) {
        ctx->pc = 0x3E0010u;
        goto label_3e0010;
    }
    ctx->pc = 0x3E0008u;
    {
        const bool branch_taken_0x3e0008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0008) {
            ctx->pc = 0x3E0020u;
            goto label_3e0020;
        }
    }
    ctx->pc = 0x3E0010u;
label_3e0010:
    // 0x3e0010: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e0010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3e0014:
    // 0x3e0014: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e0014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3e0018:
    // 0x3e0018: 0x10000008  b           . + 4 + (0x8 << 2)
label_3e001c:
    if (ctx->pc == 0x3E001Cu) {
        ctx->pc = 0x3E001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0018u;
        // 0x3e001c: 0xa6240828  sh          $a0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0020u;
        goto label_3e0020;
    }
    ctx->pc = 0x3E0018u;
    {
        const bool branch_taken_0x3e0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0018u;
        // 0x3e001c: 0xa6240828  sh          $a0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0018) {
            ctx->pc = 0x3E003Cu;
            goto label_3e003c;
        }
    }
    ctx->pc = 0x3E0020u;
label_3e0020:
    // 0x3e0020: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e0020u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3e0024:
    // 0x3e0024: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e0024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3e0028:
    // 0x3e0028: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e0028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3e002c:
    // 0x3e002c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e002cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3e0030:
    // 0x3e0030: 0x0  nop
    ctx->pc = 0x3e0030u;
    // NOP
label_3e0034:
    // 0x3e0034: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e0034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e0038:
    // 0x3e0038: 0xa6240828  sh          $a0, 0x828($s1)
    ctx->pc = 0x3e0038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
label_3e003c:
    // 0x3e003c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e0040:
    // 0x3e0040: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3e0040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3e0044:
    // 0x3e0044: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x3e0044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3e0048:
    // 0x3e0048: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3e0048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3e004c:
    // 0x3e004c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e004cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3e0050:
    // 0x3e0050: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3e0050u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_3e0054:
    // 0x3e0054: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3e0054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3e0058:
    // 0x3e0058: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x3e0058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3e005c:
    // 0x3e005c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e0060:
    // 0x3e0060: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3e0060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_3e0064:
    // 0x3e0064: 0x10000058  b           . + 4 + (0x58 << 2)
label_3e0068:
    if (ctx->pc == 0x3E0068u) {
        ctx->pc = 0x3E0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0064u;
        // 0x3e0068: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E006Cu;
        goto label_3e006c;
    }
    ctx->pc = 0x3E0064u;
    {
        const bool branch_taken_0x3e0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0064u;
        // 0x3e0068: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0064) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3E006Cu;
label_3e006c:
    // 0x3e006c: 0x0  nop
    ctx->pc = 0x3e006cu;
    // NOP
label_3e0070:
    // 0x3e0070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0074:
    // 0x3e0074: 0xc0f8118  jal         func_3E0460
label_3e0078:
    if (ctx->pc == 0x3E0078u) {
        ctx->pc = 0x3E0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0074u;
        // 0x3e0078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E007Cu;
        goto label_3e007c;
    }
    ctx->pc = 0x3E0074u;
    SET_GPR_U32(ctx, 31, 0x3E007Cu);
    ctx->pc = 0x3E0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0074u;
    // 0x3e0078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0460u, 0x3E0074u, 0x3E007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E007Cu;
label_3e007c:
    // 0x3e007c: 0x92232c78  lbu         $v1, 0x2C78($s1)
    ctx->pc = 0x3e007cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11384)));
label_3e0080:
    // 0x3e0080: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_3e0084:
    if (ctx->pc == 0x3E0084u) {
        ctx->pc = 0x3E0088u;
        goto label_3e0088;
    }
    ctx->pc = 0x3E0080u;
    {
        const bool branch_taken_0x3e0080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0080) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3E0088u;
label_3e0088:
    // 0x3e0088: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e008c:
    // 0x3e008c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x3e008cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_3e0090:
    // 0x3e0090: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e0090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3e0094:
    // 0x3e0094: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e0094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_3e0098:
    // 0x3e0098: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e0098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3e009c:
    // 0x3e009c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e009cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3e00a0:
    // 0x3e00a0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e00a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3e00a4:
    // 0x3e00a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e00a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e00a8:
    // 0x3e00a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e00a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e00ac:
    // 0x3e00ac: 0x0  nop
    ctx->pc = 0x3e00acu;
    // NOP
label_3e00b0:
    // 0x3e00b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e00b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3e00b4:
    // 0x3e00b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e00b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e00b8:
    // 0x3e00b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3e00bc:
    if (ctx->pc == 0x3E00BCu) {
        ctx->pc = 0x3E00C0u;
        goto label_3e00c0;
    }
    ctx->pc = 0x3E00B8u;
    {
        const bool branch_taken_0x3e00b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e00b8) {
            ctx->pc = 0x3E00D0u;
            goto label_3e00d0;
        }
    }
    ctx->pc = 0x3E00C0u;
label_3e00c0:
    // 0x3e00c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e00c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3e00c4:
    // 0x3e00c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e00c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3e00c8:
    // 0x3e00c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3e00cc:
    if (ctx->pc == 0x3E00CCu) {
        ctx->pc = 0x3E00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00C8u;
        // 0x3e00cc: 0xa6240828  sh          $a0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E00D0u;
        goto label_3e00d0;
    }
    ctx->pc = 0x3E00C8u;
    {
        const bool branch_taken_0x3e00c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00C8u;
        // 0x3e00cc: 0xa6240828  sh          $a0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e00c8) {
            ctx->pc = 0x3E00ECu;
            goto label_3e00ec;
        }
    }
    ctx->pc = 0x3E00D0u;
label_3e00d0:
    // 0x3e00d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e00d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3e00d4:
    // 0x3e00d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3e00d8:
    // 0x3e00d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e00d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3e00dc:
    // 0x3e00dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e00dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3e00e0:
    // 0x3e00e0: 0x0  nop
    ctx->pc = 0x3e00e0u;
    // NOP
label_3e00e4:
    // 0x3e00e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e00e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e00e8:
    // 0x3e00e8: 0xa6240828  sh          $a0, 0x828($s1)
    ctx->pc = 0x3e00e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 4));
label_3e00ec:
    // 0x3e00ec: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3e00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3e00f0:
    // 0x3e00f0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3e00f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3e00f4:
    // 0x3e00f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e00f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e00f8:
    // 0x3e00f8: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3e00f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3e00fc:
    // 0x3e00fc: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x3e00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
label_3e0100:
    // 0x3e0100: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3e0100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3e0104:
    // 0x3e0104: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x3e0104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3e0108:
    // 0x3e0108: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e0108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e010c:
    // 0x3e010c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3e010cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_3e0110:
    // 0x3e0110: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3e0114:
    if (ctx->pc == 0x3E0114u) {
        ctx->pc = 0x3E0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0110u;
        // 0x3e0114: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0118u;
        goto label_3e0118;
    }
    ctx->pc = 0x3E0110u;
    {
        const bool branch_taken_0x3e0110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0110u;
        // 0x3e0114: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0110) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3E0118u;
label_3e0118:
    // 0x3e0118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e011c:
    // 0x3e011c: 0xc0f8118  jal         func_3E0460
label_3e0120:
    if (ctx->pc == 0x3E0120u) {
        ctx->pc = 0x3E0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E011Cu;
        // 0x3e0120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0124u;
        goto label_3e0124;
    }
    ctx->pc = 0x3E011Cu;
    SET_GPR_U32(ctx, 31, 0x3E0124u);
    ctx->pc = 0x3E0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E011Cu;
    // 0x3e0120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0460u, 0x3E011Cu, 0x3E0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0124u;
label_3e0124:
    // 0x3e0124: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e0124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e0128:
    // 0x3e0128: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x3e0128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3e012c:
    // 0x3e012c: 0x0  nop
    ctx->pc = 0x3e012cu;
    // NOP
label_3e0130:
    // 0x3e0130: 0x96220828  lhu         $v0, 0x828($s1)
    ctx->pc = 0x3e0130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
label_3e0134:
    // 0x3e0134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e0138:
    if (ctx->pc == 0x3E0138u) {
        ctx->pc = 0x3E013Cu;
        goto label_3e013c;
    }
    ctx->pc = 0x3E0134u;
    {
        const bool branch_taken_0x3e0134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0134) {
            ctx->pc = 0x3E0148u;
            goto label_3e0148;
        }
    }
    ctx->pc = 0x3E013Cu;
label_3e013c:
    // 0x3e013c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e0140:
    // 0x3e0140: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e0144:
    if (ctx->pc == 0x3E0144u) {
        ctx->pc = 0x3E0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0140u;
        // 0x3e0144: 0xa6220828  sh          $v0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0148u;
        goto label_3e0148;
    }
    ctx->pc = 0x3E0140u;
    {
        const bool branch_taken_0x3e0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0140u;
        // 0x3e0144: 0xa6220828  sh          $v0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0140) {
            ctx->pc = 0x3E0160u;
            goto label_3e0160;
        }
    }
    ctx->pc = 0x3E0148u;
label_3e0148:
    // 0x3e0148: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3e0148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_3e014c:
    // 0x3e014c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0150:
    // 0x3e0150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e0150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0154:
    // 0x3e0154: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e0154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0158:
    // 0x3e0158: 0xc09f9a4  jal         func_27E690
label_3e015c:
    if (ctx->pc == 0x3E015Cu) {
        ctx->pc = 0x3E015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0158u;
        // 0x3e015c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0160u;
        goto label_3e0160;
    }
    ctx->pc = 0x3E0158u;
    SET_GPR_U32(ctx, 31, 0x3E0160u);
    ctx->pc = 0x3E015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0158u;
    // 0x3e015c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x3E0158u, 0x3E0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0160u;
label_3e0160:
    // 0x3e0160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0164:
    // 0x3e0164: 0xc0f8118  jal         func_3E0460
label_3e0168:
    if (ctx->pc == 0x3E0168u) {
        ctx->pc = 0x3E0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0164u;
        // 0x3e0168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E016Cu;
        goto label_3e016c;
    }
    ctx->pc = 0x3E0164u;
    SET_GPR_U32(ctx, 31, 0x3E016Cu);
    ctx->pc = 0x3E0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0164u;
    // 0x3e0168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0460u, 0x3E0164u, 0x3E016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E016Cu;
label_3e016c:
    // 0x3e016c: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3e016cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_3e0170:
    // 0x3e0170: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_3e0174:
    if (ctx->pc == 0x3E0174u) {
        ctx->pc = 0x3E0178u;
        goto label_3e0178;
    }
    ctx->pc = 0x3E0170u;
    {
        const bool branch_taken_0x3e0170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0170) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3E0178u;
label_3e0178:
    // 0x3e0178: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3e017c:
    if (ctx->pc == 0x3E017Cu) {
        ctx->pc = 0x3E0180u;
        goto label_3e0180;
    }
    ctx->pc = 0x3E0178u;
    {
        const bool branch_taken_0x3e0178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0178) {
            ctx->pc = 0x3E0190u;
            goto label_3e0190;
        }
    }
    ctx->pc = 0x3E0180u;
label_3e0180:
    // 0x3e0180: 0x92252c73  lbu         $a1, 0x2C73($s1)
    ctx->pc = 0x3e0180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11379)));
label_3e0184:
    // 0x3e0184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0188:
    // 0x3e0188: 0xc0f5924  jal         func_3D6490
label_3e018c:
    if (ctx->pc == 0x3E018Cu) {
        ctx->pc = 0x3E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0188u;
        // 0x3e018c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0190u;
        goto label_3e0190;
    }
    ctx->pc = 0x3E0188u;
    SET_GPR_U32(ctx, 31, 0x3E0190u);
    ctx->pc = 0x3E018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0188u;
    // 0x3e018c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6490u, 0x3E0188u, 0x3E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0190u;
label_3e0190:
    // 0x3e0190: 0xc0f8100  jal         func_3E0400
label_3e0194:
    if (ctx->pc == 0x3E0194u) {
        ctx->pc = 0x3E0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0190u;
        // 0x3e0194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0198u;
        goto label_3e0198;
    }
    ctx->pc = 0x3E0190u;
    SET_GPR_U32(ctx, 31, 0x3E0198u);
    ctx->pc = 0x3E0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0190u;
    // 0x3e0194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0400u, 0x3E0190u, 0x3E0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0198u;
label_3e0198:
    // 0x3e0198: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e0198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e019c:
    // 0x3e019c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e01a0:
    if (ctx->pc == 0x3E01A0u) {
        ctx->pc = 0x3E01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E019Cu;
        // 0x3e01a0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01A4u;
        goto label_3e01a4;
    }
    ctx->pc = 0x3E019Cu;
    {
        const bool branch_taken_0x3e019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E019Cu;
        // 0x3e01a0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e019c) {
            ctx->pc = 0x3E01C8u;
            goto label_3e01c8;
        }
    }
    ctx->pc = 0x3E01A4u;
label_3e01a4:
    // 0x3e01a4: 0x0  nop
    ctx->pc = 0x3e01a4u;
    // NOP
label_3e01a8:
    // 0x3e01a8: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x3e01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_3e01ac:
    // 0x3e01ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3e01acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3e01b0:
    // 0x3e01b0: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x3e01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_3e01b4:
    // 0x3e01b4: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3e01b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3e01b8:
    // 0x3e01b8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3e01b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3e01bc:
    // 0x3e01bc: 0x320f809  jalr        $t9
label_3e01c0:
    if (ctx->pc == 0x3E01C0u) {
        ctx->pc = 0x3E01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01BCu;
        // 0x3e01c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01C4u;
        goto label_3e01c4;
    }
    ctx->pc = 0x3E01BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E01C4u);
        ctx->pc = 0x3E01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01BCu;
        // 0x3e01c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E01BCu, 0x3E01C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E01C4u;
label_3e01c4:
    // 0x3e01c4: 0x0  nop
    ctx->pc = 0x3e01c4u;
    // NOP
label_3e01c8:
    // 0x3e01c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e01c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e01cc:
    // 0x3e01cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e01ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e01d0:
    // 0x3e01d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e01d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e01d4:
    // 0x3e01d4: 0x3e00008  jr          $ra
label_3e01d8:
    if (ctx->pc == 0x3E01D8u) {
        ctx->pc = 0x3E01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01D4u;
        // 0x3e01d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01DCu;
        goto label_fallthrough_0x3e01d4;
    }
    ctx->pc = 0x3E01D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01D4u;
        // 0x3e01d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E01D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e01d4:
    ctx->pc = 0x3E01DCu;
}
