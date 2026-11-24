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

// Function: sub_002CAF20
// Address: 0x2caf20 - 0x2cb118
void sub_002CAF20_0x2caf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF20_0x2caf20");
#endif

    switch (ctx->pc) {
        case 0x2caf20u: goto label_2caf20;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf28u: goto label_2caf28;
        case 0x2caf2cu: goto label_2caf2c;
        case 0x2caf30u: goto label_2caf30;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf38u: goto label_2caf38;
        case 0x2caf3cu: goto label_2caf3c;
        case 0x2caf40u: goto label_2caf40;
        case 0x2caf44u: goto label_2caf44;
        case 0x2caf48u: goto label_2caf48;
        case 0x2caf4cu: goto label_2caf4c;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf54u: goto label_2caf54;
        case 0x2caf58u: goto label_2caf58;
        case 0x2caf5cu: goto label_2caf5c;
        case 0x2caf60u: goto label_2caf60;
        case 0x2caf64u: goto label_2caf64;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf6cu: goto label_2caf6c;
        case 0x2caf70u: goto label_2caf70;
        case 0x2caf74u: goto label_2caf74;
        case 0x2caf78u: goto label_2caf78;
        case 0x2caf7cu: goto label_2caf7c;
        case 0x2caf80u: goto label_2caf80;
        case 0x2caf84u: goto label_2caf84;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf8cu: goto label_2caf8c;
        case 0x2caf90u: goto label_2caf90;
        case 0x2caf94u: goto label_2caf94;
        case 0x2caf98u: goto label_2caf98;
        case 0x2caf9cu: goto label_2caf9c;
        case 0x2cafa0u: goto label_2cafa0;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cafa8u: goto label_2cafa8;
        case 0x2cafacu: goto label_2cafac;
        case 0x2cafb0u: goto label_2cafb0;
        case 0x2cafb4u: goto label_2cafb4;
        case 0x2cafb8u: goto label_2cafb8;
        case 0x2cafbcu: goto label_2cafbc;
        case 0x2cafc0u: goto label_2cafc0;
        case 0x2cafc4u: goto label_2cafc4;
        case 0x2cafc8u: goto label_2cafc8;
        case 0x2cafccu: goto label_2cafcc;
        case 0x2cafd0u: goto label_2cafd0;
        case 0x2cafd4u: goto label_2cafd4;
        case 0x2cafd8u: goto label_2cafd8;
        case 0x2cafdcu: goto label_2cafdc;
        case 0x2cafe0u: goto label_2cafe0;
        case 0x2cafe4u: goto label_2cafe4;
        case 0x2cafe8u: goto label_2cafe8;
        case 0x2cafecu: goto label_2cafec;
        case 0x2caff0u: goto label_2caff0;
        case 0x2caff4u: goto label_2caff4;
        case 0x2caff8u: goto label_2caff8;
        case 0x2caffcu: goto label_2caffc;
        case 0x2cb000u: goto label_2cb000;
        case 0x2cb004u: goto label_2cb004;
        case 0x2cb008u: goto label_2cb008;
        case 0x2cb00cu: goto label_2cb00c;
        case 0x2cb010u: goto label_2cb010;
        case 0x2cb014u: goto label_2cb014;
        case 0x2cb018u: goto label_2cb018;
        case 0x2cb01cu: goto label_2cb01c;
        case 0x2cb020u: goto label_2cb020;
        case 0x2cb024u: goto label_2cb024;
        case 0x2cb028u: goto label_2cb028;
        case 0x2cb02cu: goto label_2cb02c;
        case 0x2cb030u: goto label_2cb030;
        case 0x2cb034u: goto label_2cb034;
        case 0x2cb038u: goto label_2cb038;
        case 0x2cb03cu: goto label_2cb03c;
        case 0x2cb040u: goto label_2cb040;
        case 0x2cb044u: goto label_2cb044;
        case 0x2cb048u: goto label_2cb048;
        case 0x2cb04cu: goto label_2cb04c;
        case 0x2cb050u: goto label_2cb050;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb058u: goto label_2cb058;
        case 0x2cb05cu: goto label_2cb05c;
        case 0x2cb060u: goto label_2cb060;
        case 0x2cb064u: goto label_2cb064;
        case 0x2cb068u: goto label_2cb068;
        case 0x2cb06cu: goto label_2cb06c;
        case 0x2cb070u: goto label_2cb070;
        case 0x2cb074u: goto label_2cb074;
        case 0x2cb078u: goto label_2cb078;
        case 0x2cb07cu: goto label_2cb07c;
        case 0x2cb080u: goto label_2cb080;
        case 0x2cb084u: goto label_2cb084;
        case 0x2cb088u: goto label_2cb088;
        case 0x2cb08cu: goto label_2cb08c;
        case 0x2cb090u: goto label_2cb090;
        case 0x2cb094u: goto label_2cb094;
        case 0x2cb098u: goto label_2cb098;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0a0u: goto label_2cb0a0;
        case 0x2cb0a4u: goto label_2cb0a4;
        case 0x2cb0a8u: goto label_2cb0a8;
        case 0x2cb0acu: goto label_2cb0ac;
        case 0x2cb0b0u: goto label_2cb0b0;
        case 0x2cb0b4u: goto label_2cb0b4;
        case 0x2cb0b8u: goto label_2cb0b8;
        case 0x2cb0bcu: goto label_2cb0bc;
        case 0x2cb0c0u: goto label_2cb0c0;
        case 0x2cb0c4u: goto label_2cb0c4;
        case 0x2cb0c8u: goto label_2cb0c8;
        case 0x2cb0ccu: goto label_2cb0cc;
        case 0x2cb0d0u: goto label_2cb0d0;
        case 0x2cb0d4u: goto label_2cb0d4;
        case 0x2cb0d8u: goto label_2cb0d8;
        case 0x2cb0dcu: goto label_2cb0dc;
        case 0x2cb0e0u: goto label_2cb0e0;
        case 0x2cb0e4u: goto label_2cb0e4;
        case 0x2cb0e8u: goto label_2cb0e8;
        case 0x2cb0ecu: goto label_2cb0ec;
        case 0x2cb0f0u: goto label_2cb0f0;
        case 0x2cb0f4u: goto label_2cb0f4;
        case 0x2cb0f8u: goto label_2cb0f8;
        case 0x2cb0fcu: goto label_2cb0fc;
        case 0x2cb100u: goto label_2cb100;
        case 0x2cb104u: goto label_2cb104;
        case 0x2cb108u: goto label_2cb108;
        case 0x2cb10cu: goto label_2cb10c;
        case 0x2cb110u: goto label_2cb110;
        case 0x2cb114u: goto label_2cb114;
        default: break;
    }

    ctx->pc = 0x2caf20u;

label_2caf20:
    // 0x2caf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2caf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2caf24:
    // 0x2caf24: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2caf24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2caf28:
    // 0x2caf28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2caf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2caf2c:
    // 0x2caf2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2caf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2caf30:
    // 0x2caf30: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
label_2caf34:
    if (ctx->pc == 0x2CAF34u) {
        ctx->pc = 0x2CAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF30u;
        // 0x2caf34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF38u;
        goto label_2caf38;
    }
    ctx->pc = 0x2CAF30u;
    {
        const bool branch_taken_0x2caf30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF30u;
        // 0x2caf34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf30) {
            ctx->pc = 0x2CB090u;
            goto label_2cb090;
        }
    }
    ctx->pc = 0x2CAF38u;
label_2caf38:
    // 0x2caf38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2caf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2caf3c:
    // 0x2caf3c: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
label_2caf40:
    if (ctx->pc == 0x2CAF40u) {
        ctx->pc = 0x2CAF44u;
        goto label_2caf44;
    }
    ctx->pc = 0x2CAF3Cu;
    {
        const bool branch_taken_0x2caf3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2caf3c) {
            ctx->pc = 0x2CAFE8u;
            goto label_2cafe8;
        }
    }
    ctx->pc = 0x2CAF44u;
label_2caf44:
    // 0x2caf44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2caf48:
    if (ctx->pc == 0x2CAF48u) {
        ctx->pc = 0x2CAF4Cu;
        goto label_2caf4c;
    }
    ctx->pc = 0x2CAF44u;
    {
        const bool branch_taken_0x2caf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf44) {
            ctx->pc = 0x2CAF58u;
            goto label_2caf58;
        }
    }
    ctx->pc = 0x2CAF4Cu;
label_2caf4c:
    // 0x2caf4c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2caf50:
    if (ctx->pc == 0x2CAF50u) {
        ctx->pc = 0x2CAF54u;
        goto label_2caf54;
    }
    ctx->pc = 0x2CAF4Cu;
    {
        const bool branch_taken_0x2caf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf4c) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CAF54u;
label_2caf54:
    // 0x2caf54: 0x0  nop
    ctx->pc = 0x2caf54u;
    // NOP
label_2caf58:
    // 0x2caf58: 0xc0b2bc0  jal         func_2CAF00
label_2caf5c:
    if (ctx->pc == 0x2CAF5Cu) {
        ctx->pc = 0x2CAF60u;
        goto label_2caf60;
    }
    ctx->pc = 0x2CAF58u;
    SET_GPR_U32(ctx, 31, 0x2CAF60u);
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2CAF58u, 0x2CAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF60u;
label_2caf60:
    // 0x2caf60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2caf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2caf64:
    // 0x2caf64: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_2caf68:
    if (ctx->pc == 0x2CAF68u) {
        ctx->pc = 0x2CAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF64u;
        // 0x2caf68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF6Cu;
        goto label_2caf6c;
    }
    ctx->pc = 0x2CAF64u;
    {
        const bool branch_taken_0x2caf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF64u;
        // 0x2caf68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf64) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CAF6Cu;
label_2caf6c:
    // 0x2caf6c: 0x0  nop
    ctx->pc = 0x2caf6cu;
    // NOP
label_2caf70:
    // 0x2caf70: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2caf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2caf74:
    // 0x2caf74: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2caf74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2caf78:
    // 0x2caf78: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2caf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2caf7c:
    // 0x2caf7c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2caf7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2caf80:
    // 0x2caf80: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2caf84:
    if (ctx->pc == 0x2CAF84u) {
        ctx->pc = 0x2CAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF80u;
        // 0x2caf84: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF88u;
        goto label_2caf88;
    }
    ctx->pc = 0x2CAF80u;
    {
        const bool branch_taken_0x2caf80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF80u;
        // 0x2caf84: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf80) {
            ctx->pc = 0x2CAF90u;
            goto label_2caf90;
        }
    }
    ctx->pc = 0x2CAF88u;
label_2caf88:
    // 0x2caf88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2caf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2caf8c:
    // 0x2caf8c: 0x0  nop
    ctx->pc = 0x2caf8cu;
    // NOP
label_2caf90:
    // 0x2caf90: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_2caf94:
    if (ctx->pc == 0x2CAF94u) {
        ctx->pc = 0x2CAF98u;
        goto label_2caf98;
    }
    ctx->pc = 0x2CAF90u;
    {
        const bool branch_taken_0x2caf90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf90) {
            ctx->pc = 0x2CAFD0u;
            goto label_2cafd0;
        }
    }
    ctx->pc = 0x2CAF98u;
label_2caf98:
    // 0x2caf98: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x2caf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
label_2caf9c:
    // 0x2caf9c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2caf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_2cafa0:
    // 0x2cafa0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2cafa4:
    if (ctx->pc == 0x2CAFA4u) {
        ctx->pc = 0x2CAFA8u;
        goto label_2cafa8;
    }
    ctx->pc = 0x2CAFA0u;
    {
        const bool branch_taken_0x2cafa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cafa0) {
            ctx->pc = 0x2CAFD0u;
            goto label_2cafd0;
        }
    }
    ctx->pc = 0x2CAFA8u;
label_2cafa8:
    // 0x2cafa8: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_2cafac:
    // 0x2cafac: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cafacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2cafb0:
    // 0x2cafb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cafb4:
    if (ctx->pc == 0x2CAFB4u) {
        ctx->pc = 0x2CAFB8u;
        goto label_2cafb8;
    }
    ctx->pc = 0x2CAFB0u;
    {
        const bool branch_taken_0x2cafb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cafb0) {
            ctx->pc = 0x2CAFD0u;
            goto label_2cafd0;
        }
    }
    ctx->pc = 0x2CAFB8u;
label_2cafb8:
    // 0x2cafb8: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2cafb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2cafbc:
    // 0x2cafbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cafc0:
    // 0x2cafc0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2cafc4:
    // 0x2cafc4: 0x320f809  jalr        $t9
label_2cafc8:
    if (ctx->pc == 0x2CAFC8u) {
        ctx->pc = 0x2CAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFC4u;
        // 0x2cafc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAFCCu;
        goto label_2cafcc;
    }
    ctx->pc = 0x2CAFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAFCCu);
        ctx->pc = 0x2CAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFC4u;
        // 0x2cafc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAFC4u, 0x2CAFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAFCCu;
label_2cafcc:
    // 0x2cafcc: 0x0  nop
    ctx->pc = 0x2cafccu;
    // NOP
label_2cafd0:
    // 0x2cafd0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cafd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2cafd4:
    // 0x2cafd4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_2cafd8:
    if (ctx->pc == 0x2CAFD8u) {
        ctx->pc = 0x2CAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFD4u;
        // 0x2cafd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAFDCu;
        goto label_2cafdc;
    }
    ctx->pc = 0x2CAFD4u;
    {
        const bool branch_taken_0x2cafd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFD4u;
        // 0x2cafd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafd4) {
            ctx->pc = 0x2CAF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caf70;
        }
    }
    ctx->pc = 0x2CAFDCu;
label_2cafdc:
    // 0x2cafdc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2cafe0:
    if (ctx->pc == 0x2CAFE0u) {
        ctx->pc = 0x2CAFE4u;
        goto label_2cafe4;
    }
    ctx->pc = 0x2CAFDCu;
    {
        const bool branch_taken_0x2cafdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cafdc) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CAFE4u;
label_2cafe4:
    // 0x2cafe4: 0x0  nop
    ctx->pc = 0x2cafe4u;
    // NOP
label_2cafe8:
    // 0x2cafe8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cafe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2cafec:
    // 0x2cafec: 0xc0a7450  jal         func_29D140
label_2caff0:
    if (ctx->pc == 0x2CAFF0u) {
        ctx->pc = 0x2CAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFECu;
        // 0x2caff0: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAFF4u;
        goto label_2caff4;
    }
    ctx->pc = 0x2CAFECu;
    SET_GPR_U32(ctx, 31, 0x2CAFF4u);
    ctx->pc = 0x2CAFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFECu;
    // 0x2caff0: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D140u, 0x2CAFECu, 0x2CAFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFF4u;
label_2caff4:
    // 0x2caff4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2caff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
label_2caff8:
    // 0x2caff8: 0xc0a7450  jal         func_29D140
label_2caffc:
    if (ctx->pc == 0x2CAFFCu) {
        ctx->pc = 0x2CAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFF8u;
        // 0x2caffc: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB000u;
        goto label_2cb000;
    }
    ctx->pc = 0x2CAFF8u;
    SET_GPR_U32(ctx, 31, 0x2CB000u);
    ctx->pc = 0x2CAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFF8u;
    // 0x2caffc: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D140u, 0x2CAFF8u, 0x2CB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB000u;
label_2cb000:
    // 0x2cb000: 0xc0b2bc0  jal         func_2CAF00
label_2cb004:
    if (ctx->pc == 0x2CB004u) {
        ctx->pc = 0x2CB008u;
        goto label_2cb008;
    }
    ctx->pc = 0x2CB000u;
    SET_GPR_U32(ctx, 31, 0x2CB008u);
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2CB000u, 0x2CB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB008u;
label_2cb008:
    // 0x2cb008: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cb008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb00c:
    // 0x2cb00c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_2cb010:
    if (ctx->pc == 0x2CB010u) {
        ctx->pc = 0x2CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB00Cu;
        // 0x2cb010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB014u;
        goto label_2cb014;
    }
    ctx->pc = 0x2CB00Cu;
    {
        const bool branch_taken_0x2cb00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB00Cu;
        // 0x2cb010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb00c) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CB014u;
label_2cb014:
    // 0x2cb014: 0x0  nop
    ctx->pc = 0x2cb014u;
    // NOP
label_2cb018:
    // 0x2cb018: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2cb018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb01c:
    // 0x2cb01c: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2cb01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2cb020:
    // 0x2cb020: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2cb020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2cb024:
    // 0x2cb024: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2cb024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2cb028:
    // 0x2cb028: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2cb02c:
    if (ctx->pc == 0x2CB02Cu) {
        ctx->pc = 0x2CB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB028u;
        // 0x2cb02c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB030u;
        goto label_2cb030;
    }
    ctx->pc = 0x2CB028u;
    {
        const bool branch_taken_0x2cb028 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB028u;
        // 0x2cb02c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb028) {
            ctx->pc = 0x2CB038u;
            goto label_2cb038;
        }
    }
    ctx->pc = 0x2CB030u;
label_2cb030:
    // 0x2cb030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb034:
    // 0x2cb034: 0x0  nop
    ctx->pc = 0x2cb034u;
    // NOP
label_2cb038:
    // 0x2cb038: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_2cb03c:
    if (ctx->pc == 0x2CB03Cu) {
        ctx->pc = 0x2CB040u;
        goto label_2cb040;
    }
    ctx->pc = 0x2CB038u;
    {
        const bool branch_taken_0x2cb038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb038) {
            ctx->pc = 0x2CB078u;
            goto label_2cb078;
        }
    }
    ctx->pc = 0x2CB040u;
label_2cb040:
    // 0x2cb040: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x2cb040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
label_2cb044:
    // 0x2cb044: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x2cb044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_2cb048:
    // 0x2cb048: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2cb04c:
    if (ctx->pc == 0x2CB04Cu) {
        ctx->pc = 0x2CB050u;
        goto label_2cb050;
    }
    ctx->pc = 0x2CB048u;
    {
        const bool branch_taken_0x2cb048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb048) {
            ctx->pc = 0x2CB078u;
            goto label_2cb078;
        }
    }
    ctx->pc = 0x2CB050u;
label_2cb050:
    // 0x2cb050: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2cb050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_2cb054:
    // 0x2cb054: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cb054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2cb058:
    // 0x2cb058: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cb05c:
    if (ctx->pc == 0x2CB05Cu) {
        ctx->pc = 0x2CB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB058u;
        // 0x2cb05c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB060u;
        goto label_2cb060;
    }
    ctx->pc = 0x2CB058u;
    {
        const bool branch_taken_0x2cb058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB058u;
        // 0x2cb05c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb058) {
            ctx->pc = 0x2CB078u;
            goto label_2cb078;
        }
    }
    ctx->pc = 0x2CB060u;
label_2cb060:
    // 0x2cb060: 0xa0850114  sb          $a1, 0x114($a0)
    ctx->pc = 0x2cb060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 276), (uint8_t)GPR_U32(ctx, 5));
label_2cb064:
    // 0x2cb064: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2cb064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2cb068:
    // 0x2cb068: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2cb068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2cb06c:
    // 0x2cb06c: 0x320f809  jalr        $t9
label_2cb070:
    if (ctx->pc == 0x2CB070u) {
        ctx->pc = 0x2CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB06Cu;
        // 0x2cb070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB074u;
        goto label_2cb074;
    }
    ctx->pc = 0x2CB06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB074u);
        ctx->pc = 0x2CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB06Cu;
        // 0x2cb070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB06Cu, 0x2CB074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB074u;
label_2cb074:
    // 0x2cb074: 0x0  nop
    ctx->pc = 0x2cb074u;
    // NOP
label_2cb078:
    // 0x2cb078: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cb078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb07c:
    // 0x2cb07c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_2cb080:
    if (ctx->pc == 0x2CB080u) {
        ctx->pc = 0x2CB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB07Cu;
        // 0x2cb080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB084u;
        goto label_2cb084;
    }
    ctx->pc = 0x2CB07Cu;
    {
        const bool branch_taken_0x2cb07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB07Cu;
        // 0x2cb080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb07c) {
            ctx->pc = 0x2CB018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb018;
        }
    }
    ctx->pc = 0x2CB084u;
label_2cb084:
    // 0x2cb084: 0x10000020  b           . + 4 + (0x20 << 2)
label_2cb088:
    if (ctx->pc == 0x2CB088u) {
        ctx->pc = 0x2CB08Cu;
        goto label_2cb08c;
    }
    ctx->pc = 0x2CB084u;
    {
        const bool branch_taken_0x2cb084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb084) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CB08Cu;
label_2cb08c:
    // 0x2cb08c: 0x0  nop
    ctx->pc = 0x2cb08cu;
    // NOP
label_2cb090:
    // 0x2cb090: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cb090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2cb094:
    // 0x2cb094: 0xc0a7450  jal         func_29D140
label_2cb098:
    if (ctx->pc == 0x2CB098u) {
        ctx->pc = 0x2CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB094u;
        // 0x2cb098: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB09Cu;
        goto label_2cb09c;
    }
    ctx->pc = 0x2CB094u;
    SET_GPR_U32(ctx, 31, 0x2CB09Cu);
    ctx->pc = 0x2CB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB094u;
    // 0x2cb098: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D140u, 0x2CB094u, 0x2CB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB09Cu;
label_2cb09c:
    // 0x2cb09c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2cb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
label_2cb0a0:
    // 0x2cb0a0: 0xc0a7450  jal         func_29D140
label_2cb0a4:
    if (ctx->pc == 0x2CB0A4u) {
        ctx->pc = 0x2CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0A0u;
        // 0x2cb0a4: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0A8u;
        goto label_2cb0a8;
    }
    ctx->pc = 0x2CB0A0u;
    SET_GPR_U32(ctx, 31, 0x2CB0A8u);
    ctx->pc = 0x2CB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB0A0u;
    // 0x2cb0a4: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D140u, 0x2CB0A0u, 0x2CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0A8u;
label_2cb0a8:
    // 0x2cb0a8: 0xc0b2bc0  jal         func_2CAF00
label_2cb0ac:
    if (ctx->pc == 0x2CB0ACu) {
        ctx->pc = 0x2CB0B0u;
        goto label_2cb0b0;
    }
    ctx->pc = 0x2CB0A8u;
    SET_GPR_U32(ctx, 31, 0x2CB0B0u);
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2CB0A8u, 0x2CB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0B0u;
label_2cb0b0:
    // 0x2cb0b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cb0b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb0b4:
    // 0x2cb0b4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2cb0b8:
    if (ctx->pc == 0x2CB0B8u) {
        ctx->pc = 0x2CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B4u;
        // 0x2cb0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0BCu;
        goto label_2cb0bc;
    }
    ctx->pc = 0x2CB0B4u;
    {
        const bool branch_taken_0x2cb0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B4u;
        // 0x2cb0b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0b4) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CB0BCu;
label_2cb0bc:
    // 0x2cb0bc: 0x0  nop
    ctx->pc = 0x2cb0bcu;
    // NOP
label_2cb0c0:
    // 0x2cb0c0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2cb0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb0c4:
    // 0x2cb0c4: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2cb0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2cb0c8:
    // 0x2cb0c8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2cb0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2cb0cc:
    // 0x2cb0cc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2cb0ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2cb0d0:
    // 0x2cb0d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2cb0d4:
    if (ctx->pc == 0x2CB0D4u) {
        ctx->pc = 0x2CB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0D0u;
        // 0x2cb0d4: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0D8u;
        goto label_2cb0d8;
    }
    ctx->pc = 0x2CB0D0u;
    {
        const bool branch_taken_0x2cb0d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0D0u;
        // 0x2cb0d4: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0d0) {
            ctx->pc = 0x2CB0E0u;
            goto label_2cb0e0;
        }
    }
    ctx->pc = 0x2CB0D8u;
label_2cb0d8:
    // 0x2cb0d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb0dc:
    // 0x2cb0dc: 0x0  nop
    ctx->pc = 0x2cb0dcu;
    // NOP
label_2cb0e0:
    // 0x2cb0e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2cb0e4:
    if (ctx->pc == 0x2CB0E4u) {
        ctx->pc = 0x2CB0E8u;
        goto label_2cb0e8;
    }
    ctx->pc = 0x2CB0E0u;
    {
        const bool branch_taken_0x2cb0e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0e0) {
            ctx->pc = 0x2CB0F8u;
            goto label_2cb0f8;
        }
    }
    ctx->pc = 0x2CB0E8u;
label_2cb0e8:
    // 0x2cb0e8: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2cb0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2cb0ec:
    // 0x2cb0ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2cb0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2cb0f0:
    // 0x2cb0f0: 0x320f809  jalr        $t9
label_2cb0f4:
    if (ctx->pc == 0x2CB0F4u) {
        ctx->pc = 0x2CB0F8u;
        goto label_2cb0f8;
    }
    ctx->pc = 0x2CB0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB0F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB0F0u, 0x2CB0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB0F8u;
label_2cb0f8:
    // 0x2cb0f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cb0f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb0fc:
    // 0x2cb0fc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_2cb100:
    if (ctx->pc == 0x2CB100u) {
        ctx->pc = 0x2CB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0FCu;
        // 0x2cb100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB104u;
        goto label_2cb104;
    }
    ctx->pc = 0x2CB0FCu;
    {
        const bool branch_taken_0x2cb0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0FCu;
        // 0x2cb100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0fc) {
            ctx->pc = 0x2CB0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb0c0;
        }
    }
    ctx->pc = 0x2CB104u;
label_2cb104:
    // 0x2cb104: 0x0  nop
    ctx->pc = 0x2cb104u;
    // NOP
label_2cb108:
    // 0x2cb108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb10c:
    // 0x2cb10c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb110:
    // 0x2cb110: 0x3e00008  jr          $ra
label_2cb114:
    if (ctx->pc == 0x2CB114u) {
        ctx->pc = 0x2CB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB110u;
        // 0x2cb114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB118u;
        goto label_fallthrough_0x2cb110;
    }
    ctx->pc = 0x2CB110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB110u;
        // 0x2cb114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cb110:
    ctx->pc = 0x2CB118u;
}
