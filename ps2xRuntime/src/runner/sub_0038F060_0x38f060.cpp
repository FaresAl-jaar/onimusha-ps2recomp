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

// Function: sub_0038F060
// Address: 0x38f060 - 0x38f280
void sub_0038F060_0x38f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F060_0x38f060");
#endif

    switch (ctx->pc) {
        case 0x38f0e0u: goto label_38f0e0;
        case 0x38f0f8u: goto label_38f0f8;
        case 0x38f100u: goto label_38f100;
        case 0x38f1ecu: goto label_38f1ec;
        case 0x38f1f8u: goto label_38f1f8;
        case 0x38f200u: goto label_38f200;
        case 0x38f20cu: goto label_38f20c;
        case 0x38f214u: goto label_38f214;
        case 0x38f25cu: goto label_38f25c;
        default: break;
    }

    ctx->pc = 0x38f060u;

    // 0x38f060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f06c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x38f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x38f070: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x38f070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x38f074: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x38f074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x38f078: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x38f078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x38f07c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x38f07cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x38f080: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x38F080u;
    {
        const bool branch_taken_0x38f080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F080u;
        // 0x38f084: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f080) {
            ctx->pc = 0x38F270u;
            goto label_38f270;
        }
    }
    ctx->pc = 0x38F088u;
    // 0x38f088: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x38f088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x38f08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38f090: 0x24a521c0  addiu       $a1, $a1, 0x21C0
    ctx->pc = 0x38f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8640));
    // 0x38f094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38f094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38f098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38f09c: 0x600008  jr          $v1
    ctx->pc = 0x38F09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38F0A8u: goto label_38f0a8;
            case 0x38F0D8u: goto label_38f0d8;
            case 0x38F0F0u: goto label_38f0f0;
            case 0x38F130u: goto label_38f130;
            case 0x38F148u: goto label_38f148;
            case 0x38F178u: goto label_38f178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F09Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38F0A4u;
    // 0x38f0a4: 0x0  nop
    ctx->pc = 0x38f0a4u;
    // NOP
label_38f0a8:
    // 0x38f0a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38f0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f0ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38f0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f0b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38f0b4: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x38f0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38f0b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38f0bc: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x38f0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38f0c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38f0c4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x38f0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38f0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f0cc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x38f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x38f0d0: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x38f0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x38f0d4: 0x0  nop
    ctx->pc = 0x38f0d4u;
    // NOP
label_38f0d8:
    // 0x38f0d8: 0xc0e40d4  jal         func_390350
    ctx->pc = 0x38F0D8u;
    SET_GPR_U32(ctx, 31, 0x38F0E0u);
    ctx->pc = 0x390350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390350u, 0x38F0D8u, 0x38F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0E0u;
label_38f0e0:
    // 0x38f0e0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x38F0E0u;
    {
        const bool branch_taken_0x38f0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E0u;
        // 0x38f0e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0e0) {
            ctx->pc = 0x38F270u;
            goto label_38f270;
        }
    }
    ctx->pc = 0x38F0E8u;
    // 0x38f0e8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x38F0E8u;
    {
        const bool branch_taken_0x38f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E8u;
        // 0x38f0ec: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0e8) {
            ctx->pc = 0x38F270u;
            goto label_38f270;
        }
    }
    ctx->pc = 0x38F0F0u;
label_38f0f0:
    // 0x38f0f0: 0xc0a483c  jal         func_2920F0
    ctx->pc = 0x38F0F0u;
    SET_GPR_U32(ctx, 31, 0x38F0F8u);
    ctx->pc = 0x38F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0F0u;
    // 0x38f0f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920F0u, 0x38F0F0u, 0x38F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F0F8u;
label_38f0f8:
    // 0x38f0f8: 0xc0e3868  jal         func_38E1A0
    ctx->pc = 0x38F0F8u;
    SET_GPR_U32(ctx, 31, 0x38F100u);
    ctx->pc = 0x38F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0F8u;
    // 0x38f0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E1A0u, 0x38F0F8u, 0x38F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F100u;
label_38f100:
    // 0x38f100: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38f100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f104: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x38f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x38f108: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38f108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f10c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x38f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38f110: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x38f110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x38f114: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38f114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38f118: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x38f118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x38f11c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x38f11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x38f120: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x38f120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x38f124: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38f128: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x38f128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f12c: 0x0  nop
    ctx->pc = 0x38f12cu;
    // NOP
label_38f130:
    // 0x38f130: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x38f130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38f134: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x38F134u;
    {
        const bool branch_taken_0x38f134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F134u;
        // 0x38f138: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f134) {
            ctx->pc = 0x38F270u;
            goto label_38f270;
        }
    }
    ctx->pc = 0x38F13Cu;
    // 0x38f13c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x38F13Cu;
    {
        const bool branch_taken_0x38f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F13Cu;
        // 0x38f140: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f13c) {
            ctx->pc = 0x38F270u;
            goto label_38f270;
        }
    }
    ctx->pc = 0x38F144u;
    // 0x38f144: 0x0  nop
    ctx->pc = 0x38f144u;
    // NOP
label_38f148:
    // 0x38f148: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x38f148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f14c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38f14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f150: 0x240300d1  addiu       $v1, $zero, 0xD1
    ctx->pc = 0x38f150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x38f154: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x38f154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x38f158: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38f158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38f15c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x38f15cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f160: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38f160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38f164: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x38f164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x38f168: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38f16c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x38f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x38f170: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x38f170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f174: 0x0  nop
    ctx->pc = 0x38f174u;
    // NOP
label_38f178:
    // 0x38f178: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x38f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x38f17c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38f17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38f180: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38f180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38f184: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x38f184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x38f188: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38f188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38f18c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38f190: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38f190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38f194: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38f194u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38f198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38f198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38f19c: 0x0  nop
    ctx->pc = 0x38f19cu;
    // NOP
    // 0x38f1a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38f1a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38f1a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38f1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38f1a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38F1A8u;
    {
        const bool branch_taken_0x38f1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1A8u;
        // 0x38f1ac: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1a8) {
            ctx->pc = 0x38F1C0u;
            goto label_38f1c0;
        }
    }
    ctx->pc = 0x38F1B0u;
    // 0x38f1b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38f1b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38f1b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38f1b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38f1b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38F1B8u;
    {
        const bool branch_taken_0x38f1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f1b8) {
            ctx->pc = 0x38F1D8u;
            goto label_38f1d8;
        }
    }
    ctx->pc = 0x38F1C0u;
label_38f1c0:
    // 0x38f1c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38f1c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38f1c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38f1c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38f1c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38f1cc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38f1ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38f1d0: 0x0  nop
    ctx->pc = 0x38f1d0u;
    // NOP
    // 0x38f1d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38f1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38f1d8:
    // 0x38f1d8: 0x14a40021  bne         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x38F1D8u;
    {
        const bool branch_taken_0x38f1d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x38f1d8) {
            ctx->pc = 0x38F260u;
            goto label_38f260;
        }
    }
    ctx->pc = 0x38F1E0u;
    // 0x38f1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f1e4: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x38F1E4u;
    SET_GPR_U32(ctx, 31, 0x38F1ECu);
    ctx->pc = 0x38F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1E4u;
    // 0x38f1e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x38F1E4u, 0x38F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F1ECu;
label_38f1ec:
    // 0x38f1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f1f0: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x38F1F0u;
    SET_GPR_U32(ctx, 31, 0x38F1F8u);
    ctx->pc = 0x38F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1F0u;
    // 0x38f1f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x38F1F0u, 0x38F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F1F8u;
label_38f1f8:
    // 0x38f1f8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x38F1F8u;
    SET_GPR_U32(ctx, 31, 0x38F200u);
    ctx->pc = 0x38F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1F8u;
    // 0x38f1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x38F1F8u, 0x38F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F200u;
label_38f200:
    // 0x38f200: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x38f200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38f204: 0xc097594  jal         func_25D650
    ctx->pc = 0x38F204u;
    SET_GPR_U32(ctx, 31, 0x38F20Cu);
    ctx->pc = 0x38F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F204u;
    // 0x38f208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D650u, 0x38F204u, 0x38F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F20Cu;
label_38f20c:
    // 0x38f20c: 0xc0e40ec  jal         func_3903B0
    ctx->pc = 0x38F20Cu;
    SET_GPR_U32(ctx, 31, 0x38F214u);
    ctx->pc = 0x3903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903B0u, 0x38F20Cu, 0x38F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F214u;
label_38f214:
    // 0x38f214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f218: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x38f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f21c: 0xa2032b3c  sb          $v1, 0x2B3C($s0)
    ctx->pc = 0x38f21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11068), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f220: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x38f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38f224: 0xa2042b4c  sb          $a0, 0x2B4C($s0)
    ctx->pc = 0x38f224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 4));
    // 0x38f228: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x38f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x38f22c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x38f22cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x38f230: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38f230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38f234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38f238: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38f238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38f23c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F23Cu;
    {
        const bool branch_taken_0x38f23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f23c) {
            ctx->pc = 0x38F260u;
            goto label_38f260;
        }
    }
    ctx->pc = 0x38F244u;
    // 0x38f244: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x38f244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x38f248: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x38f248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38f24c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F24Cu;
    {
        const bool branch_taken_0x38f24c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x38f24c) {
            ctx->pc = 0x38F260u;
            goto label_38f260;
        }
    }
    ctx->pc = 0x38F254u;
    // 0x38f254: 0xc0cfab4  jal         func_33EAD0
    ctx->pc = 0x38F254u;
    SET_GPR_U32(ctx, 31, 0x38F25Cu);
    ctx->pc = 0x33EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EAD0u, 0x38F254u, 0x38F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F25Cu;
label_38f25c:
    // 0x38f25c: 0x0  nop
    ctx->pc = 0x38f25cu;
    // NOP
label_38f260:
    // 0x38f260: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x38f260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38f264: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38F264u;
    {
        const bool branch_taken_0x38f264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F264u;
        // 0x38f268: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f264) {
            ctx->pc = 0x38F270u;
            goto label_38f270;
        }
    }
    ctx->pc = 0x38F26Cu;
    // 0x38f26c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38f26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_38f270:
    // 0x38f270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f278: 0x3e00008  jr          $ra
    ctx->pc = 0x38F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F278u;
        // 0x38f27c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F280u;
}
