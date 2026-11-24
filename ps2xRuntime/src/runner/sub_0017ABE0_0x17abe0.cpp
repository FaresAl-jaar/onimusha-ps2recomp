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

// Function: sub_0017ABE0
// Address: 0x17abe0 - 0x17b1cc
void sub_0017ABE0_0x17abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ABE0_0x17abe0");
#endif

    switch (ctx->pc) {
        case 0x17ac28u: goto label_17ac28;
        case 0x17ac3cu: goto label_17ac3c;
        case 0x17ac48u: goto label_17ac48;
        case 0x17ac5cu: goto label_17ac5c;
        case 0x17ac68u: goto label_17ac68;
        case 0x17ac74u: goto label_17ac74;
        case 0x17acdcu: goto label_17acdc;
        case 0x17ace4u: goto label_17ace4;
        case 0x17acecu: goto label_17acec;
        case 0x17acf4u: goto label_17acf4;
        case 0x17acfcu: goto label_17acfc;
        case 0x17ad18u: goto label_17ad18;
        case 0x17ad2cu: goto label_17ad2c;
        case 0x17ad34u: goto label_17ad34;
        case 0x17ad3cu: goto label_17ad3c;
        case 0x17ad44u: goto label_17ad44;
        case 0x17ad4cu: goto label_17ad4c;
        case 0x17ad5cu: goto label_17ad5c;
        case 0x17ad60u: goto label_17ad60;
        case 0x17ad90u: goto label_17ad90;
        case 0x17adb8u: goto label_17adb8;
        case 0x17ade0u: goto label_17ade0;
        case 0x17ae18u: goto label_17ae18;
        case 0x17ae68u: goto label_17ae68;
        case 0x17ae88u: goto label_17ae88;
        case 0x17aeb0u: goto label_17aeb0;
        case 0x17aed0u: goto label_17aed0;
        case 0x17af10u: goto label_17af10;
        case 0x17af48u: goto label_17af48;
        case 0x17af68u: goto label_17af68;
        case 0x17af98u: goto label_17af98;
        case 0x17afa0u: goto label_17afa0;
        case 0x17afb8u: goto label_17afb8;
        case 0x17afd0u: goto label_17afd0;
        case 0x17afe8u: goto label_17afe8;
        case 0x17b000u: goto label_17b000;
        case 0x17b040u: goto label_17b040;
        case 0x17b058u: goto label_17b058;
        case 0x17b074u: goto label_17b074;
        case 0x17b07cu: goto label_17b07c;
        case 0x17b084u: goto label_17b084;
        case 0x17b090u: goto label_17b090;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b150u: goto label_17b150;
        default: break;
    }

    ctx->pc = 0x17abe0u;

    // 0x17abe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17abe4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x17abe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17abe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17abec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17abf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17abf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17abf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abf8: 0x1020016f  beqz        $at, . + 4 + (0x16F << 2)
    ctx->pc = 0x17ABF8u;
    {
        const bool branch_taken_0x17abf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABF8u;
        // 0x17abfc: 0xa0802d63  sb          $zero, 0x2D63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11619), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abf8) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17AC00u;
    // 0x17ac00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17ac04: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x17ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x17ac08: 0x24a55540  addiu       $a1, $a1, 0x5540
    ctx->pc = 0x17ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21824));
    // 0x17ac0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17ac10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ac14: 0x600008  jr          $v1
    ctx->pc = 0x17AC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AC20u: goto label_17ac20;
            case 0x17ACC0u: goto label_17acc0;
            case 0x17AF40u: goto label_17af40;
            case 0x17AF50u: goto label_17af50;
            case 0x17AF60u: goto label_17af60;
            case 0x17B048u: goto label_17b048;
            case 0x17B0C0u: goto label_17b0c0;
            case 0x17B140u: goto label_17b140;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17AC1Cu;
    // 0x17ac1c: 0x0  nop
    ctx->pc = 0x17ac1cu;
    // NOP
label_17ac20:
    // 0x17ac20: 0xc05e81c  jal         func_17A070
    ctx->pc = 0x17AC20u;
    SET_GPR_U32(ctx, 31, 0x17AC28u);
    ctx->pc = 0x17A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A070u, 0x17AC20u, 0x17AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC28u;
label_17ac28:
    // 0x17ac28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ac2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac30: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x17ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x17ac34: 0xc05e884  jal         func_17A210
    ctx->pc = 0x17AC34u;
    SET_GPR_U32(ctx, 31, 0x17AC3Cu);
    ctx->pc = 0x17AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC34u;
    // 0x17ac38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A210u, 0x17AC34u, 0x17AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC3Cu;
label_17ac3c:
    // 0x17ac3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac40: 0xc05e8a4  jal         func_17A290
    ctx->pc = 0x17AC40u;
    SET_GPR_U32(ctx, 31, 0x17AC48u);
    ctx->pc = 0x17AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC40u;
    // 0x17ac44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A290u, 0x17AC40u, 0x17AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC48u;
label_17ac48:
    // 0x17ac48: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x17ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x17ac4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac50: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x17ac50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17ac54: 0xc05e8c0  jal         func_17A300
    ctx->pc = 0x17AC54u;
    SET_GPR_U32(ctx, 31, 0x17AC5Cu);
    ctx->pc = 0x17AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC54u;
    // 0x17ac58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A300u, 0x17AC54u, 0x17AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC5Cu;
label_17ac5c:
    // 0x17ac5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac60: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x17AC60u;
    SET_GPR_U32(ctx, 31, 0x17AC68u);
    ctx->pc = 0x17AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC60u;
    // 0x17ac64: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x17AC60u, 0x17AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC68u;
label_17ac68:
    // 0x17ac68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ac68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac6c: 0xc05ecb0  jal         func_17B2C0
    ctx->pc = 0x17AC6Cu;
    SET_GPR_U32(ctx, 31, 0x17AC74u);
    ctx->pc = 0x17AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC6Cu;
    // 0x17ac70: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B2C0u, 0x17AC6Cu, 0x17AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC74u;
label_17ac74:
    // 0x17ac74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ac78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ac7c: 0xae242d04  sw          $a0, 0x2D04($s1)
    ctx->pc = 0x17ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11524), GPR_U32(ctx, 4));
    // 0x17ac80: 0xae242d08  sw          $a0, 0x2D08($s1)
    ctx->pc = 0x17ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11528), GPR_U32(ctx, 4));
    // 0x17ac84: 0xae202d0c  sw          $zero, 0x2D0C($s1)
    ctx->pc = 0x17ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11532), GPR_U32(ctx, 0));
    // 0x17ac88: 0xae242d14  sw          $a0, 0x2D14($s1)
    ctx->pc = 0x17ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11540), GPR_U32(ctx, 4));
    // 0x17ac8c: 0xa6202d18  sh          $zero, 0x2D18($s1)
    ctx->pc = 0x17ac8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11544), (uint16_t)GPR_U32(ctx, 0));
    // 0x17ac90: 0xa6202d1a  sh          $zero, 0x2D1A($s1)
    ctx->pc = 0x17ac90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11546), (uint16_t)GPR_U32(ctx, 0));
    // 0x17ac94: 0xae242d20  sw          $a0, 0x2D20($s1)
    ctx->pc = 0x17ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11552), GPR_U32(ctx, 4));
    // 0x17ac98: 0xa6202d24  sh          $zero, 0x2D24($s1)
    ctx->pc = 0x17ac98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11556), (uint16_t)GPR_U32(ctx, 0));
    // 0x17ac9c: 0xa6202d26  sh          $zero, 0x2D26($s1)
    ctx->pc = 0x17ac9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11558), (uint16_t)GPR_U32(ctx, 0));
    // 0x17aca0: 0xae202cc8  sw          $zero, 0x2CC8($s1)
    ctx->pc = 0x17aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11464), GPR_U32(ctx, 0));
    // 0x17aca4: 0xae202ccc  sw          $zero, 0x2CCC($s1)
    ctx->pc = 0x17aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11468), GPR_U32(ctx, 0));
    // 0x17aca8: 0xa2232d60  sb          $v1, 0x2D60($s1)
    ctx->pc = 0x17aca8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11616), (uint8_t)GPR_U32(ctx, 3));
    // 0x17acac: 0xa2232d61  sb          $v1, 0x2D61($s1)
    ctx->pc = 0x17acacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11617), (uint8_t)GPR_U32(ctx, 3));
    // 0x17acb0: 0xa2232d62  sb          $v1, 0x2D62($s1)
    ctx->pc = 0x17acb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11618), (uint8_t)GPR_U32(ctx, 3));
    // 0x17acb4: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x17ACB4u;
    {
        const bool branch_taken_0x17acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACB4u;
        // 0x17acb8: 0xae202cb8  sw          $zero, 0x2CB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acb4) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17ACBCu;
    // 0x17acbc: 0x0  nop
    ctx->pc = 0x17acbcu;
    // NOP
label_17acc0:
    // 0x17acc0: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17acc4: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x17acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x17acc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17accc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17acccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17acd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acd4: 0xc0c9a20  jal         func_326880
    ctx->pc = 0x17ACD4u;
    SET_GPR_U32(ctx, 31, 0x17ACDCu);
    ctx->pc = 0x17ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACD4u;
    // 0x17acd8: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326880u, 0x17ACD4u, 0x17ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACDCu;
label_17acdc:
    // 0x17acdc: 0xc040d08  jal         func_103420
    ctx->pc = 0x17ACDCu;
    SET_GPR_U32(ctx, 31, 0x17ACE4u);
    ctx->pc = 0x17ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACDCu;
    // 0x17ace0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17ACDCu, 0x17ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACE4u;
label_17ace4:
    // 0x17ace4: 0xc040d08  jal         func_103420
    ctx->pc = 0x17ACE4u;
    SET_GPR_U32(ctx, 31, 0x17ACECu);
    ctx->pc = 0x17ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACE4u;
    // 0x17ace8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17ACE4u, 0x17ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACECu;
label_17acec:
    // 0x17acec: 0xc040d08  jal         func_103420
    ctx->pc = 0x17ACECu;
    SET_GPR_U32(ctx, 31, 0x17ACF4u);
    ctx->pc = 0x17ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACECu;
    // 0x17acf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17ACECu, 0x17ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACF4u;
label_17acf4:
    // 0x17acf4: 0xc040d08  jal         func_103420
    ctx->pc = 0x17ACF4u;
    SET_GPR_U32(ctx, 31, 0x17ACFCu);
    ctx->pc = 0x17ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACF4u;
    // 0x17acf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17ACF4u, 0x17ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACFCu;
label_17acfc:
    // 0x17acfc: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17ad00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ad04: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x17ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x17ad08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ad0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17ad0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad10: 0xc0c9a20  jal         func_326880
    ctx->pc = 0x17AD10u;
    SET_GPR_U32(ctx, 31, 0x17AD18u);
    ctx->pc = 0x17AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD10u;
    // 0x17ad14: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326880u, 0x17AD10u, 0x17AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD18u;
label_17ad18:
    // 0x17ad18: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x17ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x17ad1c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x17ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x17ad20: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x17ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x17ad24: 0xc0ceafc  jal         func_33ABF0
    ctx->pc = 0x17AD24u;
    SET_GPR_U32(ctx, 31, 0x17AD2Cu);
    ctx->pc = 0x17AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD24u;
    // 0x17ad28: 0xa02040b2  sb          $zero, 0x40B2($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 16562), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABF0u, 0x17AD24u, 0x17AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD2Cu;
label_17ad2c:
    // 0x17ad2c: 0xc040d08  jal         func_103420
    ctx->pc = 0x17AD2Cu;
    SET_GPR_U32(ctx, 31, 0x17AD34u);
    ctx->pc = 0x17AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD2Cu;
    // 0x17ad30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17AD2Cu, 0x17AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD34u;
label_17ad34:
    // 0x17ad34: 0xc040d08  jal         func_103420
    ctx->pc = 0x17AD34u;
    SET_GPR_U32(ctx, 31, 0x17AD3Cu);
    ctx->pc = 0x17AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD34u;
    // 0x17ad38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17AD34u, 0x17AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD3Cu;
label_17ad3c:
    // 0x17ad3c: 0xc040d08  jal         func_103420
    ctx->pc = 0x17AD3Cu;
    SET_GPR_U32(ctx, 31, 0x17AD44u);
    ctx->pc = 0x17AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD3Cu;
    // 0x17ad40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17AD3Cu, 0x17AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD44u;
label_17ad44:
    // 0x17ad44: 0xc040d08  jal         func_103420
    ctx->pc = 0x17AD44u;
    SET_GPR_U32(ctx, 31, 0x17AD4Cu);
    ctx->pc = 0x17AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD44u;
    // 0x17ad48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17AD44u, 0x17AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD4Cu;
label_17ad4c:
    // 0x17ad4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad50: 0x24050f00  addiu       $a1, $zero, 0xF00
    ctx->pc = 0x17ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x17ad54: 0xc05e8c8  jal         func_17A320
    ctx->pc = 0x17AD54u;
    SET_GPR_U32(ctx, 31, 0x17AD5Cu);
    ctx->pc = 0x17AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD54u;
    // 0x17ad58: 0x24060fcf  addiu       $a2, $zero, 0xFCF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A320u, 0x17AD54u, 0x17AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD5Cu;
label_17ad5c:
    // 0x17ad5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ad5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad60:
    // 0x17ad60: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x17ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17ad64: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ad68: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x17ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x17ad6c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x17ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17ad70: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x17ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x17ad74: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17ad78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ad7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17ad80: 0xac432b50  sw          $v1, 0x2B50($v0)
    ctx->pc = 0x17ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11088), GPR_U32(ctx, 3));
    // 0x17ad84: 0x8c422b50  lw          $v0, 0x2B50($v0)
    ctx->pc = 0x17ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11088)));
    // 0x17ad88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AD88u;
    {
        const bool branch_taken_0x17ad88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ad88) {
            ctx->pc = 0x17ADB0u;
            goto label_17adb0;
        }
    }
    ctx->pc = 0x17AD90u;
label_17ad90:
    // 0x17ad90: 0x0  nop
    ctx->pc = 0x17ad90u;
    // NOP
    // 0x17ad94: 0x0  nop
    ctx->pc = 0x17ad94u;
    // NOP
    // 0x17ad98: 0x0  nop
    ctx->pc = 0x17ad98u;
    // NOP
    // 0x17ad9c: 0x0  nop
    ctx->pc = 0x17ad9cu;
    // NOP
    // 0x17ada0: 0x0  nop
    ctx->pc = 0x17ada0u;
    // NOP
    // 0x17ada4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17ADA4u;
    {
        const bool branch_taken_0x17ada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ada4) {
            ctx->pc = 0x17AD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ad90;
        }
    }
    ctx->pc = 0x17ADACu;
    // 0x17adac: 0x0  nop
    ctx->pc = 0x17adacu;
    // NOP
label_17adb0:
    // 0x17adb0: 0xc0458c6  jal         func_116318
    ctx->pc = 0x17ADB0u;
    SET_GPR_U32(ctx, 31, 0x17ADB8u);
    ctx->pc = 0x17ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADB0u;
    // 0x17adb4: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x17ADB0u, 0x17ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADB8u;
label_17adb8:
    // 0x17adb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17adbc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17adc0: 0xac622be0  sw          $v0, 0x2BE0($v1)
    ctx->pc = 0x17adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11232), GPR_U32(ctx, 2));
    // 0x17adc4: 0x8c622be0  lw          $v0, 0x2BE0($v1)
    ctx->pc = 0x17adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11232)));
    // 0x17adc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ADC8u;
    {
        const bool branch_taken_0x17adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17adc8) {
            ctx->pc = 0x17ADE0u;
            goto label_17ade0;
        }
    }
    ctx->pc = 0x17ADD0u;
    // 0x17add0: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x17add0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x17add4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x17add4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x17add8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x17ADD8u;
    {
        const bool branch_taken_0x17add8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17add8) {
            ctx->pc = 0x17AE00u;
            goto label_17ae00;
        }
    }
    ctx->pc = 0x17ADE0u;
label_17ade0:
    // 0x17ade0: 0x0  nop
    ctx->pc = 0x17ade0u;
    // NOP
    // 0x17ade4: 0x0  nop
    ctx->pc = 0x17ade4u;
    // NOP
    // 0x17ade8: 0x0  nop
    ctx->pc = 0x17ade8u;
    // NOP
    // 0x17adec: 0x0  nop
    ctx->pc = 0x17adecu;
    // NOP
    // 0x17adf0: 0x0  nop
    ctx->pc = 0x17adf0u;
    // NOP
    // 0x17adf4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17ADF4u;
    {
        const bool branch_taken_0x17adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17adf4) {
            ctx->pc = 0x17ADE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ade0;
        }
    }
    ctx->pc = 0x17ADFCu;
    // 0x17adfc: 0x0  nop
    ctx->pc = 0x17adfcu;
    // NOP
label_17ae00:
    // 0x17ae00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17ae04: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x17ae04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17ae08: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17AE08u;
    {
        const bool branch_taken_0x17ae08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ae08) {
            ctx->pc = 0x17AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ad60;
        }
    }
    ctx->pc = 0x17AE10u;
    // 0x17ae10: 0xc0481cc  jal         func_120730
    ctx->pc = 0x17AE10u;
    SET_GPR_U32(ctx, 31, 0x17AE18u);
    ctx->pc = 0x120730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120730u, 0x17AE10u, 0x17AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE18u;
label_17ae18:
    // 0x17ae18: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x17ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17ae1c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17AE1Cu;
    {
        const bool branch_taken_0x17ae1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ae1c) {
            ctx->pc = 0x17AE48u;
            goto label_17ae48;
        }
    }
    ctx->pc = 0x17AE24u;
    // 0x17ae24: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x17ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17ae28: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AE28u;
    {
        const bool branch_taken_0x17ae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ae28) {
            ctx->pc = 0x17AE38u;
            goto label_17ae38;
        }
    }
    ctx->pc = 0x17AE30u;
    // 0x17ae30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17AE30u;
    {
        const bool branch_taken_0x17ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae30) {
            ctx->pc = 0x17AE58u;
            goto label_17ae58;
        }
    }
    ctx->pc = 0x17AE38u;
label_17ae38:
    // 0x17ae38: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17ae3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17AE3Cu;
    {
        const bool branch_taken_0x17ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE3Cu;
        // 0x17ae40: 0xae222c98  sw          $v0, 0x2C98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae3c) {
            ctx->pc = 0x17AE60u;
            goto label_17ae60;
        }
    }
    ctx->pc = 0x17AE44u;
    // 0x17ae44: 0x0  nop
    ctx->pc = 0x17ae44u;
    // NOP
label_17ae48:
    // 0x17ae48: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17ae4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17AE4Cu;
    {
        const bool branch_taken_0x17ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE4Cu;
        // 0x17ae50: 0xae222c98  sw          $v0, 0x2C98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae4c) {
            ctx->pc = 0x17AE60u;
            goto label_17ae60;
        }
    }
    ctx->pc = 0x17AE54u;
    // 0x17ae54: 0x0  nop
    ctx->pc = 0x17ae54u;
    // NOP
label_17ae58:
    // 0x17ae58: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x17ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17ae5c: 0xae222c98  sw          $v0, 0x2C98($s1)
    ctx->pc = 0x17ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11416), GPR_U32(ctx, 2));
label_17ae60:
    // 0x17ae60: 0xc0458c6  jal         func_116318
    ctx->pc = 0x17AE60u;
    SET_GPR_U32(ctx, 31, 0x17AE68u);
    ctx->pc = 0x17AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE60u;
    // 0x17ae64: 0x8e242c98  lw          $a0, 0x2C98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x17AE60u, 0x17AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE68u;
label_17ae68:
    // 0x17ae68: 0xae222c94  sw          $v0, 0x2C94($s1)
    ctx->pc = 0x17ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11412), GPR_U32(ctx, 2));
    // 0x17ae6c: 0x8e222c94  lw          $v0, 0x2C94($s1)
    ctx->pc = 0x17ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11412)));
    // 0x17ae70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AE70u;
    {
        const bool branch_taken_0x17ae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae70) {
            ctx->pc = 0x17AE88u;
            goto label_17ae88;
        }
    }
    ctx->pc = 0x17AE78u;
    // 0x17ae78: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x17ae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x17ae7c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x17ae7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x17ae80: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AE80u;
    {
        const bool branch_taken_0x17ae80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ae80) {
            ctx->pc = 0x17AEA8u;
            goto label_17aea8;
        }
    }
    ctx->pc = 0x17AE88u;
label_17ae88:
    // 0x17ae88: 0x0  nop
    ctx->pc = 0x17ae88u;
    // NOP
    // 0x17ae8c: 0x0  nop
    ctx->pc = 0x17ae8cu;
    // NOP
    // 0x17ae90: 0x0  nop
    ctx->pc = 0x17ae90u;
    // NOP
    // 0x17ae94: 0x0  nop
    ctx->pc = 0x17ae94u;
    // NOP
    // 0x17ae98: 0x0  nop
    ctx->pc = 0x17ae98u;
    // NOP
    // 0x17ae9c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17AE9Cu;
    {
        const bool branch_taken_0x17ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae9c) {
            ctx->pc = 0x17AE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ae88;
        }
    }
    ctx->pc = 0x17AEA4u;
    // 0x17aea4: 0x0  nop
    ctx->pc = 0x17aea4u;
    // NOP
label_17aea8:
    // 0x17aea8: 0xc0458c6  jal         func_116318
    ctx->pc = 0x17AEA8u;
    SET_GPR_U32(ctx, 31, 0x17AEB0u);
    ctx->pc = 0x17AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEA8u;
    // 0x17aeac: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x17AEA8u, 0x17AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEB0u;
label_17aeb0:
    // 0x17aeb0: 0xae222cb4  sw          $v0, 0x2CB4($s1)
    ctx->pc = 0x17aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11444), GPR_U32(ctx, 2));
    // 0x17aeb4: 0x8e232cb4  lw          $v1, 0x2CB4($s1)
    ctx->pc = 0x17aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11444)));
    // 0x17aeb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AEB8u;
    {
        const bool branch_taken_0x17aeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aeb8) {
            ctx->pc = 0x17AED0u;
            goto label_17aed0;
        }
    }
    ctx->pc = 0x17AEC0u;
    // 0x17aec0: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x17aec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x17aec4: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x17aec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x17aec8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AEC8u;
    {
        const bool branch_taken_0x17aec8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17aec8) {
            ctx->pc = 0x17AEF0u;
            goto label_17aef0;
        }
    }
    ctx->pc = 0x17AED0u;
label_17aed0:
    // 0x17aed0: 0x0  nop
    ctx->pc = 0x17aed0u;
    // NOP
    // 0x17aed4: 0x0  nop
    ctx->pc = 0x17aed4u;
    // NOP
    // 0x17aed8: 0x0  nop
    ctx->pc = 0x17aed8u;
    // NOP
    // 0x17aedc: 0x0  nop
    ctx->pc = 0x17aedcu;
    // NOP
    // 0x17aee0: 0x0  nop
    ctx->pc = 0x17aee0u;
    // NOP
    // 0x17aee4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17AEE4u;
    {
        const bool branch_taken_0x17aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aee4) {
            ctx->pc = 0x17AED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aed0;
        }
    }
    ctx->pc = 0x17AEECu;
    // 0x17aeec: 0x0  nop
    ctx->pc = 0x17aeecu;
    // NOP
label_17aef0:
    // 0x17aef0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17aef4: 0xa2232c75  sb          $v1, 0x2C75($s1)
    ctx->pc = 0x17aef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11381), (uint8_t)GPR_U32(ctx, 3));
    // 0x17aef8: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17aefc: 0x3403d900  ori         $v1, $zero, 0xD900
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55552);
    // 0x17af00: 0xae232c78  sw          $v1, 0x2C78($s1)
    ctx->pc = 0x17af00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11384), GPR_U32(ctx, 3));
    // 0x17af04: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x17af08: 0xae232c7c  sw          $v1, 0x2C7C($s1)
    ctx->pc = 0x17af08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11388), GPR_U32(ctx, 3));
    // 0x17af0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17af10:
    // 0x17af10: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17af14: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17af18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17af1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17af20: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17af24: 0xa064001f  sb          $a0, 0x1F($v1)
    ctx->pc = 0x17af24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 4));
    // 0x17af28: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17AF28u;
    {
        const bool branch_taken_0x17af28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF28u;
        // 0x17af2c: 0xac64001c  sw          $a0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af28) {
            ctx->pc = 0x17AF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17af10;
        }
    }
    ctx->pc = 0x17AF30u;
    // 0x17af30: 0xa2202c70  sb          $zero, 0x2C70($s1)
    ctx->pc = 0x17af30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11376), (uint8_t)GPR_U32(ctx, 0));
    // 0x17af34: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x17AF34u;
    {
        const bool branch_taken_0x17af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF34u;
        // 0x17af38: 0xa2202c76  sb          $zero, 0x2C76($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11382), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af34) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17AF3Cu;
    // 0x17af3c: 0x0  nop
    ctx->pc = 0x17af3cu;
    // NOP
label_17af40:
    // 0x17af40: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x17AF40u;
    SET_GPR_U32(ctx, 31, 0x17AF48u);
    ctx->pc = 0x17AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF40u;
    // 0x17af44: 0x92252c71  lbu         $a1, 0x2C71($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11377)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x17AF40u, 0x17AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF48u;
label_17af48:
    // 0x17af48: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x17AF48u;
    {
        const bool branch_taken_0x17af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17af48) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17AF50u;
label_17af50:
    // 0x17af50: 0xae202cb8  sw          $zero, 0x2CB8($s1)
    ctx->pc = 0x17af50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11448), GPR_U32(ctx, 0));
    // 0x17af54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17af58: 0xae222d04  sw          $v0, 0x2D04($s1)
    ctx->pc = 0x17af58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11524), GPR_U32(ctx, 2));
    // 0x17af5c: 0xae222d08  sw          $v0, 0x2D08($s1)
    ctx->pc = 0x17af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11528), GPR_U32(ctx, 2));
label_17af60:
    // 0x17af60: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17af64: 0x0  nop
    ctx->pc = 0x17af64u;
    // NOP
label_17af68:
    // 0x17af68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17af68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17af6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17af70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17af74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17af74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17af78: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17af7c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17AF7Cu;
    {
        const bool branch_taken_0x17af7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF7Cu;
        // 0x17af80: 0xa040092c  sb          $zero, 0x92C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2348), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af7c) {
            ctx->pc = 0x17AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17af68;
        }
    }
    ctx->pc = 0x17AF84u;
    // 0x17af84: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x17af84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x17af88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17af88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af8c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x17af8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17af90: 0xc05e8d0  jal         func_17A340
    ctx->pc = 0x17AF90u;
    SET_GPR_U32(ctx, 31, 0x17AF98u);
    ctx->pc = 0x17AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF90u;
    // 0x17af94: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A340u, 0x17AF90u, 0x17AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF98u;
label_17af98:
    // 0x17af98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17af98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af9c: 0x0  nop
    ctx->pc = 0x17af9cu;
    // NOP
label_17afa0:
    // 0x17afa0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x17afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x17afa4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17afa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afac: 0x24441f10  addiu       $a0, $v0, 0x1F10
    ctx->pc = 0x17afacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
    // 0x17afb0: 0xc049590  jal         func_125640
    ctx->pc = 0x17AFB0u;
    SET_GPR_U32(ctx, 31, 0x17AFB8u);
    ctx->pc = 0x17AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFB0u;
    // 0x17afb4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x17AFB0u, 0x17AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFB8u;
label_17afb8:
    // 0x17afb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17afb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17afbc: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x17afbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17afc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17AFC0u;
    {
        const bool branch_taken_0x17afc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17afc0) {
            ctx->pc = 0x17AFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17afa0;
        }
    }
    ctx->pc = 0x17AFC8u;
    // 0x17afc8: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17afcc: 0x0  nop
    ctx->pc = 0x17afccu;
    // NOP
label_17afd0:
    // 0x17afd0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x17afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x17afd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17afd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17afd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afdc: 0x24441f10  addiu       $a0, $v0, 0x1F10
    ctx->pc = 0x17afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
    // 0x17afe0: 0xc049590  jal         func_125640
    ctx->pc = 0x17AFE0u;
    SET_GPR_U32(ctx, 31, 0x17AFE8u);
    ctx->pc = 0x17AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFE0u;
    // 0x17afe4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x17AFE0u, 0x17AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFE8u;
label_17afe8:
    // 0x17afe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17afe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17afec: 0x2e030030  sltiu       $v1, $s0, 0x30
    ctx->pc = 0x17afecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x17aff0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17AFF0u;
    {
        const bool branch_taken_0x17aff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17aff0) {
            ctx->pc = 0x17AFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17afd0;
        }
    }
    ctx->pc = 0x17AFF8u;
    // 0x17aff8: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17affc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b000:
    // 0x17b000: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17b004: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17b008: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17b00c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b010: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17b014: 0xa085001f  sb          $a1, 0x1F($a0)
    ctx->pc = 0x17b014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b018: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x17b018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17b01c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B01Cu;
    {
        const bool branch_taken_0x17b01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B01Cu;
        // 0x17b020: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b01c) {
            ctx->pc = 0x17B000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b000;
        }
    }
    ctx->pc = 0x17B024u;
    // 0x17b024: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17b028: 0x3404d900  ori         $a0, $zero, 0xD900
    ctx->pc = 0x17b028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55552);
    // 0x17b02c: 0xa2232c75  sb          $v1, 0x2C75($s1)
    ctx->pc = 0x17b02cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11381), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b030: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x17b030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x17b034: 0xae242c78  sw          $a0, 0x2C78($s1)
    ctx->pc = 0x17b034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11384), GPR_U32(ctx, 4));
    // 0x17b038: 0xae232c7c  sw          $v1, 0x2C7C($s1)
    ctx->pc = 0x17b038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11388), GPR_U32(ctx, 3));
    // 0x17b03c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_17b040:
    if (ctx->pc == 0x17B040u) {
        ctx->pc = 0x17B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B03Cu;
        // 0x17b040: 0xae202d00  sw          $zero, 0x2D00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B044u;
        goto label_fallthrough_0x17b03c;
    }
    ctx->pc = 0x17B03Cu;
    {
        const bool branch_taken_0x17b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B03Cu;
        // 0x17b040: 0xae202d00  sw          $zero, 0x2D00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b03c) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
label_fallthrough_0x17b03c:
    ctx->pc = 0x17B044u;
    // 0x17b044: 0x0  nop
    ctx->pc = 0x17b044u;
    // NOP
label_17b048:
    // 0x17b048: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x17b04c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x17b04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17b050: 0xc05e8d0  jal         func_17A340
    ctx->pc = 0x17B050u;
    SET_GPR_U32(ctx, 31, 0x17B058u);
    ctx->pc = 0x17B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B050u;
    // 0x17b054: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A340u, 0x17B050u, 0x17B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B058u;
label_17b058:
    // 0x17b058: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17b05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b060: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x17b060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x17b064: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17b064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b06c: 0xc0c9a20  jal         func_326880
    ctx->pc = 0x17B06Cu;
    SET_GPR_U32(ctx, 31, 0x17B074u);
    ctx->pc = 0x17B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B06Cu;
    // 0x17b070: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326880u, 0x17B06Cu, 0x17B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B074u;
label_17b074:
    // 0x17b074: 0xc040d08  jal         func_103420
    ctx->pc = 0x17B074u;
    SET_GPR_U32(ctx, 31, 0x17B07Cu);
    ctx->pc = 0x17B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B074u;
    // 0x17b078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17B074u, 0x17B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B07Cu;
label_17b07c:
    // 0x17b07c: 0xc040d08  jal         func_103420
    ctx->pc = 0x17B07Cu;
    SET_GPR_U32(ctx, 31, 0x17B084u);
    ctx->pc = 0x17B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B07Cu;
    // 0x17b080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x17B07Cu, 0x17B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B084u;
label_17b084:
    // 0x17b084: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x17b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x17b088: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x17b088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17b08c: 0xa02040b2  sb          $zero, 0x40B2($at)
    ctx->pc = 0x17b08cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9140B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9140B2u, _value); } while (0);
label_17b090:
    // 0x17b090: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17b094: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x17b094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x17b098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b09c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17b0a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x17b0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b0a4: 0xc049590  jal         func_125640
    ctx->pc = 0x17B0A4u;
    SET_GPR_U32(ctx, 31, 0x17B0ACu);
    ctx->pc = 0x17B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0A4u;
    // 0x17b0a8: 0x24441f10  addiu       $a0, $v0, 0x1F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x17B0A4u, 0x17B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0ACu;
label_17b0ac:
    // 0x17b0ac: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B0ACu;
    {
        const bool branch_taken_0x17b0ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b0ac) {
            ctx->pc = 0x17B090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b090;
        }
    }
    ctx->pc = 0x17B0B4u;
    // 0x17b0b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x17B0B4u;
    {
        const bool branch_taken_0x17b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b0b4) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17B0BCu;
    // 0x17b0bc: 0x0  nop
    ctx->pc = 0x17b0bcu;
    // NOP
label_17b0c0:
    // 0x17b0c0: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x17b0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17b0c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b0c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b0cc: 0x0  nop
    ctx->pc = 0x17b0ccu;
    // NOP
label_17b0d0:
    // 0x17b0d0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17b0d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17b0d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17b0dc: 0x713821  addu        $a3, $v1, $s1
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17b0e0: 0x90e3001c  lbu         $v1, 0x1C($a3)
    ctx->pc = 0x17b0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17b0e4: 0x14660010  bne         $v1, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B0E4u;
    {
        const bool branch_taken_0x17b0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x17b0e4) {
            ctx->pc = 0x17B128u;
            goto label_17b128;
        }
    }
    ctx->pc = 0x17B0ECu;
    // 0x17b0ec: 0xa0e5001f  sb          $a1, 0x1F($a3)
    ctx->pc = 0x17b0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b0f0: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x17b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x17b0f4: 0x92232c75  lbu         $v1, 0x2C75($s1)
    ctx->pc = 0x17b0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11381)));
    // 0x17b0f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17b0fc: 0xa2232c75  sb          $v1, 0x2C75($s1)
    ctx->pc = 0x17b0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11381), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b100: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x17b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b104: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x17b104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17b108: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17b10c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17b110: 0xae232c7c  sw          $v1, 0x2C7C($s1)
    ctx->pc = 0x17b110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11388), GPR_U32(ctx, 3));
    // 0x17b114: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b118: 0x8e242c78  lw          $a0, 0x2C78($s1)
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11384)));
    // 0x17b11c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17b120: 0xae232c78  sw          $v1, 0x2C78($s1)
    ctx->pc = 0x17b120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11384), GPR_U32(ctx, 3));
    // 0x17b124: 0x0  nop
    ctx->pc = 0x17b124u;
    // NOP
label_17b128:
    // 0x17b128: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b12c: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x17b12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17b130: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17B130u;
    {
        const bool branch_taken_0x17b130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b130) {
            ctx->pc = 0x17B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b0d0;
        }
    }
    ctx->pc = 0x17B138u;
    // 0x17b138: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17B138u;
    {
        const bool branch_taken_0x17b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b138) {
            ctx->pc = 0x17B1B8u;
            goto label_17b1b8;
        }
    }
    ctx->pc = 0x17B140u;
label_17b140:
    // 0x17b140: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17b144: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b148: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b14c: 0x0  nop
    ctx->pc = 0x17b14cu;
    // NOP
label_17b150:
    // 0x17b150: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x17b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17b154: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17b158: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17b158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17b15c: 0x713821  addu        $a3, $v1, $s1
    ctx->pc = 0x17b15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17b160: 0x90e3001c  lbu         $v1, 0x1C($a3)
    ctx->pc = 0x17b160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17b164: 0x14660010  bne         $v1, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B164u;
    {
        const bool branch_taken_0x17b164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x17b164) {
            ctx->pc = 0x17B1A8u;
            goto label_17b1a8;
        }
    }
    ctx->pc = 0x17B16Cu;
    // 0x17b16c: 0xa0e5001f  sb          $a1, 0x1F($a3)
    ctx->pc = 0x17b16cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b170: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x17b170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x17b174: 0x92232c75  lbu         $v1, 0x2C75($s1)
    ctx->pc = 0x17b174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11381)));
    // 0x17b178: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17b17c: 0xa2232c75  sb          $v1, 0x2C75($s1)
    ctx->pc = 0x17b17cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11381), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b180: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x17b180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b184: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x17b188: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17b188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17b18c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17b190: 0xae232c7c  sw          $v1, 0x2C7C($s1)
    ctx->pc = 0x17b190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11388), GPR_U32(ctx, 3));
    // 0x17b194: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x17b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b198: 0x8e242c78  lw          $a0, 0x2C78($s1)
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11384)));
    // 0x17b19c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17b1a0: 0xae232c78  sw          $v1, 0x2C78($s1)
    ctx->pc = 0x17b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11384), GPR_U32(ctx, 3));
    // 0x17b1a4: 0x0  nop
    ctx->pc = 0x17b1a4u;
    // NOP
label_17b1a8:
    // 0x17b1a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b1ac: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x17b1acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17b1b0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17B1B0u;
    {
        const bool branch_taken_0x17b1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b1b0) {
            ctx->pc = 0x17B150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b150;
        }
    }
    ctx->pc = 0x17B1B8u;
label_17b1b8:
    // 0x17b1b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b1bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1C4u;
        // 0x17b1c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B1CCu;
}
