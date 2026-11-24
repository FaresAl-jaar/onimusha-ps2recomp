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

// Function: sub_001D85B0
// Address: 0x1d85b0 - 0x1d89f8
void sub_001D85B0_0x1d85b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D85B0_0x1d85b0");
#endif

    switch (ctx->pc) {
        case 0x1d8678u: goto label_1d8678;
        case 0x1d8688u: goto label_1d8688;
        case 0x1d8698u: goto label_1d8698;
        case 0x1d86a8u: goto label_1d86a8;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86e0u: goto label_1d86e0;
        case 0x1d8708u: goto label_1d8708;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d87a0u: goto label_1d87a0;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8898u: goto label_1d8898;
        case 0x1d88a8u: goto label_1d88a8;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8910u: goto label_1d8910;
        default: break;
    }

    ctx->pc = 0x1d85b0u;

    // 0x1d85b0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1d85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1d85b4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d85b8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d85bc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d85c0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d85c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d85c4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1d85c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85c8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d85cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d85ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d85d0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1d85d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d85d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d85d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d85d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d85dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d85dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d85e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d85e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d85e4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d85e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d85e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d85e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85ec: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d85ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d85f0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d85f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d85f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d85f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d85f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d85f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d85fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d85fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d8600: 0xafab00c0  sw          $t3, 0xC0($sp)
    ctx->pc = 0x1d8600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 11));
    // 0x1d8604: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d8608: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x1d8608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x1d860c: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x1d860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x1d8610: 0xafa900d4  sw          $t1, 0xD4($sp)
    ctx->pc = 0x1d8610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 9));
    // 0x1d8614: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8614u;
    {
        const bool branch_taken_0x1d8614 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1D8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8614u;
        // 0x1d8618: 0xafaa00d0  sw          $t2, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8614) {
            ctx->pc = 0x1D8628u;
            goto label_1d8628;
        }
    }
    ctx->pc = 0x1D861Cu;
    // 0x1d861c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8620: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d8620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d8624: 0x0  nop
    ctx->pc = 0x1d8624u;
    // NOP
label_1d8628:
    // 0x1d8628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d862c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d862cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8630: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d8634: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d8634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d8638: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x1d8638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d863c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d8640: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d8640u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8644: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d8644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8648: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d8648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d864c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d864cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8650: 0x0  nop
    ctx->pc = 0x1d8650u;
    // NOP
    // 0x1d8654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8658: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d865c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d865cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8660: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d8664: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1d8664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8668: 0x0  nop
    ctx->pc = 0x1d8668u;
    // NOP
    // 0x1d866c: 0x0  nop
    ctx->pc = 0x1d866cu;
    // NOP
    // 0x1d8670: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D8670u;
    SET_GPR_U32(ctx, 31, 0x1D8678u);
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D8670u, 0x1D8678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8678u;
label_1d8678:
    // 0x1d8678: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d8678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d867c: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d8680: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D8680u;
    SET_GPR_U32(ctx, 31, 0x1D8688u);
    ctx->pc = 0x1D8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8680u;
    // 0x1d8684: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D8680u, 0x1D8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8688u;
label_1d8688:
    // 0x1d8688: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d8688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d868c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d8690: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D8690u;
    SET_GPR_U32(ctx, 31, 0x1D8698u);
    ctx->pc = 0x1D8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8690u;
    // 0x1d8694: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D8690u, 0x1D8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8698u;
label_1d8698:
    // 0x1d8698: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d8698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d869c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1d869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d86a0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D86A0u;
    SET_GPR_U32(ctx, 31, 0x1D86A8u);
    ctx->pc = 0x1D86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86A0u;
    // 0x1d86a4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D86A0u, 0x1D86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86A8u;
label_1d86a8:
    // 0x1d86a8: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d86a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d86ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d86acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86b0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1d86b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1d86b4: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d86b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d86b8: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1d86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d86bc: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D86BCu;
    SET_GPR_U32(ctx, 31, 0x1D86C4u);
    ctx->pc = 0x1D86C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86BCu;
    // 0x1d86c0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D86BCu, 0x1D86C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86C4u;
label_1d86c4:
    // 0x1d86c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d86c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d86cc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d86ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d86d0: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x1D86D0u;
    {
        const bool branch_taken_0x1d86d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D0u;
        // 0x1d86d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86d0) {
            ctx->pc = 0x1D8928u;
            goto label_1d8928;
        }
    }
    ctx->pc = 0x1D86D8u;
    // 0x1d86d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d86d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86dc: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x1d86dcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_1d86e0:
    // 0x1d86e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d86e4: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x1d86e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d86e8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d86ec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d86ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d86f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d86f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d86f4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D86F4u;
    {
        const bool branch_taken_0x1d86f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86F4u;
        // 0x1d86f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86f4) {
            ctx->pc = 0x1D8780u;
            goto label_1d8780;
        }
    }
    ctx->pc = 0x1D86FCu;
    // 0x1d86fc: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d8700: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D8700u;
    SET_GPR_U32(ctx, 31, 0x1D8708u);
    ctx->pc = 0x1D8704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8700u;
    // 0x1d8704: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D8700u, 0x1D8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8708u;
label_1d8708:
    // 0x1d8708: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1d8708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d870c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d8710: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d8714: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d8714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d8718: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x1d8718u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x1d871c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1d871cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d8720: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D8720u;
    SET_GPR_U32(ctx, 31, 0x1D8728u);
    ctx->pc = 0x1D8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8720u;
    // 0x1d8724: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D8720u, 0x1D8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8728u;
label_1d8728:
    // 0x1d8728: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x1d8728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1d872c: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1d872cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d8730: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x1d8730u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x1d8734: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x1d8734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1d8738: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x1d8738u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x1d873c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1d873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d8740: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8744: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d8744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d8748: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d874c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d874cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8750: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d8754: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d8758: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1d8758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1d875c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1d8760: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8764: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d8764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d8768: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d876c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d876cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8770: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d8770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d8774: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1d8774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1d8778: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1D8778u;
    {
        const bool branch_taken_0x1d8778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8778u;
        // 0x1d877c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8778) {
            ctx->pc = 0x1D8910u;
            goto label_1d8910;
        }
    }
    ctx->pc = 0x1D8780u;
label_1d8780:
    // 0x1d8780: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d8780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d8784: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x1d8784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1d8788: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D8788u;
    SET_GPR_U32(ctx, 31, 0x1D8790u);
    ctx->pc = 0x1D878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8788u;
    // 0x1d878c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D8788u, 0x1D8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8790u;
label_1d8790:
    // 0x1d8790: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x1d8790u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x1d8794: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d8798: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D8798u;
    SET_GPR_U32(ctx, 31, 0x1D87A0u);
    ctx->pc = 0x1D879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8798u;
    // 0x1d879c: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D8798u, 0x1D87A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87A0u;
label_1d87a0:
    // 0x1d87a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d87a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d87a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d87a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87a8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d87a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d87ac: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d87acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d87b0: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D87B0u;
    SET_GPR_U32(ctx, 31, 0x1D87B8u);
    ctx->pc = 0x1D87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87B0u;
    // 0x1d87b4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D87B0u, 0x1D87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87B8u;
label_1d87b8:
    // 0x1d87b8: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x1d87b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d87bc: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d87bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d87c0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d87c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d87c4: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1d87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1d87c8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d87cc: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d87d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d87d4: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x1d87d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1d87d8: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1d87dc: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1d87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1d87e0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1d87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x1d87e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1d87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d87e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d87e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d87ec: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D87ECu;
    SET_GPR_U32(ctx, 31, 0x1D87F4u);
    ctx->pc = 0x1D87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87ECu;
    // 0x1d87f0: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D87ECu, 0x1D87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87F4u;
label_1d87f4:
    // 0x1d87f4: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1d87f4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1d87f8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1d87fc: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D87FCu;
    SET_GPR_U32(ctx, 31, 0x1D8804u);
    ctx->pc = 0x1D8800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87FCu;
    // 0x1d8800: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D87FCu, 0x1D8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8804u;
label_1d8804:
    // 0x1d8804: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8808: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d880c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d880cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d8810: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d8810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d8814: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D8814u;
    SET_GPR_U32(ctx, 31, 0x1D881Cu);
    ctx->pc = 0x1D8818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8814u;
    // 0x1d8818: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D8814u, 0x1D881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D881Cu;
label_1d881c:
    // 0x1d881c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x1d881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d8820: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d8824: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8828: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d882c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d882cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d8830: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x1d8830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x1d8834: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1d8834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1d8838: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1d8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1d883c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d883cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8840: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x1d8840u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x1d8844: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8844u;
    {
        const bool branch_taken_0x1d8844 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8844u;
        // 0x1d8848: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8844) {
            ctx->pc = 0x1D8858u;
            goto label_1d8858;
        }
    }
    ctx->pc = 0x1D884Cu;
    // 0x1d884c: 0x4600cdc6  mov.s       $f23, $f25
    ctx->pc = 0x1d884cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[25]);
    // 0x1d8850: 0x4600c586  mov.s       $f22, $f24
    ctx->pc = 0x1d8850u;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
    // 0x1d8854: 0x0  nop
    ctx->pc = 0x1d8854u;
    // NOP
label_1d8858:
    // 0x1d8858: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d885c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d8860: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x1d8860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d8864: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D8864u;
    {
        const bool branch_taken_0x1d8864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8864) {
            ctx->pc = 0x1D88F0u;
            goto label_1d88f0;
        }
    }
    ctx->pc = 0x1D886Cu;
    // 0x1d886c: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D886Cu;
    {
        const bool branch_taken_0x1d886c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d886c) {
            ctx->pc = 0x1D88B0u;
            goto label_1d88b0;
        }
    }
    ctx->pc = 0x1D8874u;
    // 0x1d8874: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x1d8874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1d8878: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d8878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d887c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d8880: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d8880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d8884: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1d8884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1d8888: 0x7aa30030  lq          $v1, 0x30($s5)
    ctx->pc = 0x1d8888u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1d888c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d8890: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D8890u;
    SET_GPR_U32(ctx, 31, 0x1D8898u);
    ctx->pc = 0x1D8894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8890u;
    // 0x1d8894: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D8890u, 0x1D8898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8898u;
label_1d8898:
    // 0x1d8898: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d889c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1d889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d88a0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D88A0u;
    SET_GPR_U32(ctx, 31, 0x1D88A8u);
    ctx->pc = 0x1D88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88A0u;
    // 0x1d88a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D88A0u, 0x1D88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88A8u;
label_1d88a8:
    // 0x1d88a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D88A8u;
    {
        const bool branch_taken_0x1d88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88A8u;
        // 0x1d88ac: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88a8) {
            ctx->pc = 0x1D88E8u;
            goto label_1d88e8;
        }
    }
    ctx->pc = 0x1D88B0u;
label_1d88b0:
    // 0x1d88b0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d88b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d88b4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d88b8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d88bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d88bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d88c0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1d88c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1d88c4: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d88c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d88c8: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1d88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d88cc: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D88CCu;
    SET_GPR_U32(ctx, 31, 0x1D88D4u);
    ctx->pc = 0x1D88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88CCu;
    // 0x1d88d0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D88CCu, 0x1D88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88D4u;
label_1d88d4:
    // 0x1d88d4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d88d8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d88dc: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D88DCu;
    SET_GPR_U32(ctx, 31, 0x1D88E4u);
    ctx->pc = 0x1D88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88DCu;
    // 0x1d88e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D88DCu, 0x1D88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88E4u;
label_1d88e4:
    // 0x1d88e4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d88e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88e8:
    // 0x1d88e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d88e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d88ec: 0x0  nop
    ctx->pc = 0x1d88ecu;
    // NOP
label_1d88f0:
    // 0x1d88f0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d88f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d88f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88f8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D88F8u;
    SET_GPR_U32(ctx, 31, 0x1D8900u);
    ctx->pc = 0x1D88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88F8u;
    // 0x1d88fc: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D88F8u, 0x1D8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8900u;
label_1d8900:
    // 0x1d8900: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d8904: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1d8904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d8908: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D8908u;
    SET_GPR_U32(ctx, 31, 0x1D8910u);
    ctx->pc = 0x1D890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8908u;
    // 0x1d890c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D8908u, 0x1D8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8910u;
label_1d8910:
    // 0x1d8910: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d8914: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d8918: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d891c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d891cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d8920: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x1D8920u;
    {
        const bool branch_taken_0x1d8920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8920u;
        // 0x1d8924: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8920) {
            ctx->pc = 0x1D86E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d86e0;
        }
    }
    ctx->pc = 0x1D8928u;
label_1d8928:
    // 0x1d8928: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d892c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d8930: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8930u;
    {
        const bool branch_taken_0x1d8930 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8930u;
        // 0x1d8934: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8930) {
            ctx->pc = 0x1D8940u;
            goto label_1d8940;
        }
    }
    ctx->pc = 0x1D8938u;
    // 0x1d8938: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d893c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d8940:
    // 0x1d8940: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8944: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d8948: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d894c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d8950: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d8950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d8954: 0x0  nop
    ctx->pc = 0x1d8954u;
    // NOP
    // 0x1d8958: 0x0  nop
    ctx->pc = 0x1d8958u;
    // NOP
    // 0x1d895c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d895cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8960: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8964: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d8964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d8968: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8968u;
    {
        const bool branch_taken_0x1d8968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8968) {
            ctx->pc = 0x1D89A0u;
            goto label_1d89a0;
        }
    }
    ctx->pc = 0x1D8970u;
    // 0x1d8970: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1d8974: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d8974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d8978: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d8978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d897c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d897cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d8980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d8984: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1d8984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d8988: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d8988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d898c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d8990: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1d8990u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1d8994: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d8998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8998u;
    {
        const bool branch_taken_0x1d8998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8998u;
        // 0x1d899c: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8998) {
            ctx->pc = 0x1D89A8u;
            goto label_1d89a8;
        }
    }
    ctx->pc = 0x1D89A0u;
label_1d89a0:
    // 0x1d89a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D89A0u;
    {
        const bool branch_taken_0x1d89a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89A0u;
        // 0x1d89a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89a0) {
            ctx->pc = 0x1D89B0u;
            goto label_1d89b0;
        }
    }
    ctx->pc = 0x1D89A8u;
label_1d89a8:
    // 0x1d89a8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d89ac: 0x0  nop
    ctx->pc = 0x1d89acu;
    // NOP
label_1d89b0:
    // 0x1d89b0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d89b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d89b4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d89b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d89b8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d89b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d89bc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d89bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d89c0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d89c4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d89c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d89c8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d89cc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d89ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d89d0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d89d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d89d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d89d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d89d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d89dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d89dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d89e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d89e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d89e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d89e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d89e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d89e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d89ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d89ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d89f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89F0u;
        // 0x1d89f4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89F8u;
}
