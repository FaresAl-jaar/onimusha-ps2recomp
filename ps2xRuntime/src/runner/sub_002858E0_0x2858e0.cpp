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

// Function: sub_002858E0
// Address: 0x2858e0 - 0x285a00
void sub_002858E0_0x2858e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002858E0_0x2858e0");
#endif

    switch (ctx->pc) {
        case 0x285920u: goto label_285920;
        case 0x285954u: goto label_285954;
        case 0x285980u: goto label_285980;
        default: break;
    }

    ctx->pc = 0x2858e0u;

    // 0x2858e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2858e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2858e4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2858e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2858e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2858ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2858ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2858f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2858f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2858f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2858f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2858f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2858fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2858fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285904: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x285904u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x285908: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x285908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x28590c: 0x90c20018  lbu         $v0, 0x18($a2)
    ctx->pc = 0x28590cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x285910: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x285910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285914: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x285914u;
    {
        const bool branch_taken_0x285914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285914u;
        // 0x285918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285914) {
            ctx->pc = 0x2859E0u;
            goto label_2859e0;
        }
    }
    ctx->pc = 0x28591Cu;
    // 0x28591c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28591cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285920:
    // 0x285920: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x285920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x285924: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x285924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x285928: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x285928u;
    {
        const bool branch_taken_0x285928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x285928) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x285930u;
    // 0x285930: 0x8606000a  lh          $a2, 0xA($s0)
    ctx->pc = 0x285930u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x285934: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x285934u;
    {
        const bool branch_taken_0x285934 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x285938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285934u;
        // 0x285938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285934) {
            ctx->pc = 0x28594Cu;
            goto label_28594c;
        }
    }
    ctx->pc = 0x28593Cu;
    // 0x28593c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x285940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285944u;
    {
        const bool branch_taken_0x285944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285944u;
        // 0x285948: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285944) {
            ctx->pc = 0x285958u;
            goto label_285958;
        }
    }
    ctx->pc = 0x28594Cu;
label_28594c:
    // 0x28594c: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x28594Cu;
    SET_GPR_U32(ctx, 31, 0x285954u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x28594Cu, 0x285954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285954u;
label_285954:
    // 0x285954: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x285954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_285958:
    // 0x285958: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x285958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x28595c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285960: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x285960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x285964: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x285964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28596c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28596cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x285970: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x285970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x285974: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x285974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x285978: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x285978u;
    SET_GPR_U32(ctx, 31, 0x285980u);
    ctx->pc = 0x28597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285978u;
    // 0x28597c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x285978u, 0x285980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285980u;
label_285980:
    // 0x285980: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285980u;
    {
        const bool branch_taken_0x285980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285980) {
            ctx->pc = 0x285998u;
            goto label_285998;
        }
    }
    ctx->pc = 0x285988u;
    // 0x285988: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x285988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28598c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28598Cu;
    {
        const bool branch_taken_0x28598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28598Cu;
        // 0x285990: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28598c) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x285994u;
    // 0x285994: 0x0  nop
    ctx->pc = 0x285994u;
    // NOP
label_285998:
    // 0x285998: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x285998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28599c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2859a0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2859a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2859a4: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2859a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2859a8: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x2859a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2859ac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2859acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2859b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2859B0u;
    {
        const bool branch_taken_0x2859b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859B0u;
        // 0x2859b4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859b0) {
            ctx->pc = 0x2859C0u;
            goto label_2859c0;
        }
    }
    ctx->pc = 0x2859B8u;
    // 0x2859b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2859B8u;
    {
        const bool branch_taken_0x2859b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859B8u;
        // 0x2859bc: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859b8) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x2859C0u;
label_2859c0:
    // 0x2859c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2859c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2859c4: 0x0  nop
    ctx->pc = 0x2859c4u;
    // NOP
label_2859c8:
    // 0x2859c8: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2859c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2859cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2859ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2859d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2859d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2859d4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2859D4u;
    {
        const bool branch_taken_0x2859d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859D4u;
        // 0x2859d8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859d4) {
            ctx->pc = 0x285920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285920;
        }
    }
    ctx->pc = 0x2859DCu;
    // 0x2859dc: 0x0  nop
    ctx->pc = 0x2859dcu;
    // NOP
label_2859e0:
    // 0x2859e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2859e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2859e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2859e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2859e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2859ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2859ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2859f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2859f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2859f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2859f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2859f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2859F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2859FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859F8u;
        // 0x2859fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2859F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285A00u;
}
