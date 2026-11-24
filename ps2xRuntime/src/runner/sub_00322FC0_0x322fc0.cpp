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

// Function: sub_00322FC0
// Address: 0x322fc0 - 0x32308c
void sub_00322FC0_0x322fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322FC0_0x322fc0");
#endif

    switch (ctx->pc) {
        case 0x323018u: goto label_323018;
        case 0x323034u: goto label_323034;
        default: break;
    }

    ctx->pc = 0x322fc0u;

    // 0x322fc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x322fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x322fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322fc8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x322fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x322fcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x322fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x322fd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x322fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322fd4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x322fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x322fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x322fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322fe8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x322fe8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x322fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ff0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x322ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x322ff4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x322ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x322ff8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x322ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x322ffc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x322ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323000: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x323000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323004: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x323004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323008: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x323008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x32300c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x32300cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x323010: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x323010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x323014: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x323014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_323018:
    // 0x323018: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32301c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x32301cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x323020: 0x8c221038  lw          $v0, 0x1038($at)
    ctx->pc = 0x323020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4152)));
    // 0x323024: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x323024u;
    {
        const bool branch_taken_0x323024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323024u;
        // 0x323028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323024) {
            ctx->pc = 0x323058u;
            goto label_323058;
        }
    }
    ctx->pc = 0x32302Cu;
    // 0x32302c: 0xc0c8068  jal         func_3201A0
    ctx->pc = 0x32302Cu;
    SET_GPR_U32(ctx, 31, 0x323034u);
    ctx->pc = 0x323030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32302Cu;
    // 0x323030: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3201A0u, 0x32302Cu, 0x323034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323034u;
label_323034:
    // 0x323034: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x323034u;
    {
        const bool branch_taken_0x323034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323034) {
            ctx->pc = 0x323058u;
            goto label_323058;
        }
    }
    ctx->pc = 0x32303Cu;
    // 0x32303c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x32303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x323040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323040u;
    {
        const bool branch_taken_0x323040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323040u;
        // 0x323044: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323040) {
            ctx->pc = 0x323050u;
            goto label_323050;
        }
    }
    ctx->pc = 0x323048u;
    // 0x323048: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x323048u;
    {
        const bool branch_taken_0x323048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323048) {
            ctx->pc = 0x323070u;
            goto label_323070;
        }
    }
    ctx->pc = 0x323050u;
label_323050:
    // 0x323050: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x323050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323054: 0x0  nop
    ctx->pc = 0x323054u;
    // NOP
label_323058:
    // 0x323058: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x323058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32305c: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x32305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x323060: 0x26310110  addiu       $s1, $s1, 0x110
    ctx->pc = 0x323060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x323064: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x323064u;
    {
        const bool branch_taken_0x323064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323064u;
        // 0x323068: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323064) {
            ctx->pc = 0x323018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323018;
        }
    }
    ctx->pc = 0x32306Cu;
    // 0x32306c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32306cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_323070:
    // 0x323070: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x323070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x323074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32307c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32307cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323084: 0x3e00008  jr          $ra
    ctx->pc = 0x323084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323084u;
        // 0x323088: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32308Cu;
}
