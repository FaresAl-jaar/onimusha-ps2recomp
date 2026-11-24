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

// Function: sub_00388590
// Address: 0x388590 - 0x388640
void sub_00388590_0x388590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388590_0x388590");
#endif

    switch (ctx->pc) {
        case 0x388608u: goto label_388608;
        case 0x388618u: goto label_388618;
        case 0x388620u: goto label_388620;
        default: break;
    }

    ctx->pc = 0x388590u;

    // 0x388590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x388594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x388598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38859c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3885a0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3885a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3885a4: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3885A4u;
    {
        const bool branch_taken_0x3885a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885A4u;
        // 0x3885a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885a4) {
            ctx->pc = 0x388618u;
            goto label_388618;
        }
    }
    ctx->pc = 0x3885ACu;
    // 0x3885ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3885ACu;
    {
        const bool branch_taken_0x3885ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3885ac) {
            ctx->pc = 0x3885C0u;
            goto label_3885c0;
        }
    }
    ctx->pc = 0x3885B4u;
    // 0x3885b4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3885B4u;
    {
        const bool branch_taken_0x3885b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3885b4) {
            ctx->pc = 0x388630u;
            goto label_388630;
        }
    }
    ctx->pc = 0x3885BCu;
    // 0x3885bc: 0x0  nop
    ctx->pc = 0x3885bcu;
    // NOP
label_3885c0:
    // 0x3885c0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3885c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3885c4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3885c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3885c8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x3885c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3885cc: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3885ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3885d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3885d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3885d4: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x3885d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x3885d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3885dc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3885dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3885e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3885e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3885e4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3885e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3885e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3885e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3885ec: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x3885ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x3885f0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3885f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3885f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3885f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3885f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3885f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3885fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3885fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x388600: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x388600u;
    SET_GPR_U32(ctx, 31, 0x388608u);
    ctx->pc = 0x388604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388600u;
    // 0x388604: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x388600u, 0x388608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388608u;
label_388608:
    // 0x388608: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x388608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x38860c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388610: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x388610u;
    SET_GPR_U32(ctx, 31, 0x388618u);
    ctx->pc = 0x388614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388610u;
    // 0x388614: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x388610u, 0x388618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388618u;
label_388618:
    // 0x388618: 0xc0e1ea4  jal         func_387A90
    ctx->pc = 0x388618u;
    SET_GPR_U32(ctx, 31, 0x388620u);
    ctx->pc = 0x38861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388618u;
    // 0x38861c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387A90u, 0x388618u, 0x388620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388620u;
label_388620:
    // 0x388620: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x388620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x388624: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x388624u;
    {
        const bool branch_taken_0x388624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388624u;
        // 0x388628: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388624) {
            ctx->pc = 0x388630u;
            goto label_388630;
        }
    }
    ctx->pc = 0x38862Cu;
    // 0x38862c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38862cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_388630:
    // 0x388630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x388630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388638: 0x3e00008  jr          $ra
    ctx->pc = 0x388638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388638u;
        // 0x38863c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388640u;
}
