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

// Function: sub_001DC4A0
// Address: 0x1dc4a0 - 0x1dc59c
void sub_001DC4A0_0x1dc4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC4A0_0x1dc4a0");
#endif

    switch (ctx->pc) {
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4fcu: goto label_1dc4fc;
        case 0x1dc56cu: goto label_1dc56c;
        default: break;
    }

    ctx->pc = 0x1dc4a0u;

    // 0x1dc4a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dc4a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dc4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dc4a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc4ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc4b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dc4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc4b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1dc4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc4c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1dc4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc4c8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1dc4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4cc: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1DC4CCu;
    SET_GPR_U32(ctx, 31, 0x1DC4D4u);
    ctx->pc = 0x1DC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4CCu;
    // 0x1dc4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1DC4CCu, 0x1DC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4D4u;
label_1dc4d4:
    // 0x1dc4d4: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1dc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x1dc4d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dc4dc: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1dc4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1dc4e0: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x1dc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x1dc4e4: 0xa6110014  sh          $s1, 0x14($s0)
    ctx->pc = 0x1dc4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 17));
    // 0x1dc4e8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dc4ec: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DC4ECu;
    {
        const bool branch_taken_0x1dc4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4ec) {
            ctx->pc = 0x1DC578u;
            goto label_1dc578;
        }
    }
    ctx->pc = 0x1DC4F4u;
    // 0x1dc4f4: 0xc07bc14  jal         func_1EF050
    ctx->pc = 0x1DC4F4u;
    SET_GPR_U32(ctx, 31, 0x1DC4FCu);
    ctx->pc = 0x1DC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4F4u;
    // 0x1dc4f8: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF050u, 0x1DC4F4u, 0x1DC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4FCu;
label_1dc4fc:
    // 0x1dc4fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DC4FCu;
    {
        const bool branch_taken_0x1dc4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4fc) {
            ctx->pc = 0x1DC578u;
            goto label_1dc578;
        }
    }
    ctx->pc = 0x1DC504u;
    // 0x1dc504: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dc504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dc508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc50c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1dc50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1dc510: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1dc510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc514: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1dc514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1dc518: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dc518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dc51c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1dc51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc520: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1dc520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1dc524: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dc528: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x1dc528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dc52c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1dc52cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1dc530: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dc530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dc534: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1dc534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dc538: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1dc538u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x1dc53c: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x1dc53cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x1dc540: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1dc540u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1dc544: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1dc544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1dc548: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x1dc548u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x1dc54c: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x1dc54cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x1dc550: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1dc550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1dc554: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x1dc554u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x1dc558: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x1dc558u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x1dc55c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1dc55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1dc560: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x1dc560u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x1dc564: 0xc076ed8  jal         func_1DBB60
    ctx->pc = 0x1DC564u;
    SET_GPR_U32(ctx, 31, 0x1DC56Cu);
    ctx->pc = 0x1DC568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC564u;
    // 0x1dc568: 0x7e020080  sq          $v0, 0x80($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1DC564u, 0x1DC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC56Cu;
label_1dc56c:
    // 0x1dc56c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dc56cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc570: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x1dc570u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x1dc574: 0x0  nop
    ctx->pc = 0x1dc574u;
    // NOP
label_1dc578:
    // 0x1dc578: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc57c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc594: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC594u;
        // 0x1dc598: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC59Cu;
}
