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

// Function: sub_0022C360
// Address: 0x22c360 - 0x22c4e8
void sub_0022C360_0x22c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C360_0x22c360");
#endif

    switch (ctx->pc) {
        case 0x22c3d8u: goto label_22c3d8;
        default: break;
    }

    ctx->pc = 0x22c360u;

    // 0x22c360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22c360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22c364: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22c368: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22c36c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22c370: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22c374: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22c378: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x22c378u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c37c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x22c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x22c380: 0x26d40048  addiu       $s4, $s6, 0x48
    ctx->pc = 0x22c380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x22c384: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22c384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22c388: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22c388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22c38c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x22c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x22c390: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x22c394: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x22c394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x22c398: 0x8e920028  lw          $s2, 0x28($s4)
    ctx->pc = 0x22c398u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x22c39c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C39Cu;
    {
        const bool branch_taken_0x22c39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c39c) {
            ctx->pc = 0x22C3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C39Cu;
            // 0x22c3a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C3A4u;
            goto label_22c3a4;
        }
    }
    ctx->pc = 0x22C3A4u;
label_22c3a4:
    // 0x22c3a4: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x22c3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22c3a8: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x22c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x22c3ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x22c3b0: 0x8ed70040  lw          $s7, 0x40($s6)
    ctx->pc = 0x22c3b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x22c3b4: 0x251001a  div         $zero, $s2, $s1
    ctx->pc = 0x22c3b4u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c3b8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x22c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x22c3bc: 0x8e9e0014  lw          $fp, 0x14($s4)
    ctx->pc = 0x22c3bcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x22c3c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x22c3c4: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x22c3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x22c3c8: 0x8010  mfhi        $s0
    ctx->pc = 0x22c3c8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x22c3cc: 0x9012  mflo        $s2
    ctx->pc = 0x22c3ccu;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x22c3d0: 0xc08f962  jal         func_23E588
    ctx->pc = 0x22C3D0u;
    SET_GPR_U32(ctx, 31, 0x22C3D8u);
    ctx->pc = 0x22C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3D0u;
    // 0x22c3d4: 0x8e950020  lw          $s5, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E588u, 0x22C3D0u, 0x22C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3D8u;
label_22c3d8:
    // 0x22c3d8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x22c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x22c3dc: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x22c3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22c3e0: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x22c3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x22c3e4: 0x2439018  mult        $s2, $s2, $v1
    ctx->pc = 0x22c3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x22c3e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22c3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22c3ec: 0x70539818  mult1       $s3, $v0, $s3
    ctx->pc = 0x22c3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x22c3f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C3F0u;
    {
        const bool branch_taken_0x22c3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c3f0) {
            ctx->pc = 0x22C3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C3F0u;
            // 0x22c3f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C3F8u;
            goto label_22c3f8;
        }
    }
    ctx->pc = 0x22C3F8u;
label_22c3f8:
    // 0x22c3f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c3fc: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x22c3fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22c400: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x22c400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22c404: 0xaed30094  sw          $s3, 0x94($s6)
    ctx->pc = 0x22c404u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 19));
    // 0x22c408: 0x8812  mflo        $s1
    ctx->pc = 0x22c408u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x22c40c: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22c410: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x22c410u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x22c414: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x22c414u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x22c418: 0xaed00090  sw          $s0, 0x90($s6)
    ctx->pc = 0x22c418u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 16));
    // 0x22c41c: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x22c41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x22c420: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22C420u;
    {
        const bool branch_taken_0x22c420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C420u;
        // 0x22c424: 0x2b7a823  subu        $s5, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c420) {
            ctx->pc = 0x22C4B8u;
            goto label_22c4b8;
        }
    }
    ctx->pc = 0x22C428u;
    // 0x22c428: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22c428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c42c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C42Cu;
    {
        const bool branch_taken_0x22c42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C42Cu;
        // 0x22c430: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c42c) {
            ctx->pc = 0x22C440u;
            goto label_22c440;
        }
    }
    ctx->pc = 0x22C434u;
    // 0x22c434: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x22c438: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22C438u;
    {
        const bool branch_taken_0x22c438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C438u;
        // 0x22c43c: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c438) {
            ctx->pc = 0x22C480u;
            goto label_22c480;
        }
    }
    ctx->pc = 0x22C440u;
label_22c440:
    // 0x22c440: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x22c440u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c444: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c448: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22c448u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c44c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22c44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c450: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22c450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c454: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c458: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22c458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c45c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22c45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c460: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22c460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c464: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22c464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22c468: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22c468u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c46c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22c46cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c470: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22c474: 0x808b0b4  j           func_22C2D0
    ctx->pc = 0x22C474u;
    ctx->pc = 0x22C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C474u;
    // 0x22c478: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C2D0u;
    sub_0022C2D0_0x22c2d0(rdram, ctx, runtime); return;
    ctx->pc = 0x22C47Cu;
    // 0x22c47c: 0x0  nop
    ctx->pc = 0x22c47cu;
    // NOP
label_22c480:
    // 0x22c480: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22c480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c484: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22c484u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c488: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22c488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c48c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22c48cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c490: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22c490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c494: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22c494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c498: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22c498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c49c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22c49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c4a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22c4a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22c4a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22c4a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c4a8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22c4a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c4ac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22c4b0: 0x808b0d0  j           func_22C340
    ctx->pc = 0x22C4B0u;
    ctx->pc = 0x22C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4B0u;
    // 0x22c4b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C340u;
    sub_0022C340_0x22c340(rdram, ctx, runtime); return;
    ctx->pc = 0x22C4B8u;
label_22c4b8:
    // 0x22c4b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22c4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c4bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22c4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c4c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22c4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c4c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22c4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22c4c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22c4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c4cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22c4ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22c4d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c4d4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22c4d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c4d8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x22c4d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c4dc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22c4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22c4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4E0u;
        // 0x22c4e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C4E8u;
}
