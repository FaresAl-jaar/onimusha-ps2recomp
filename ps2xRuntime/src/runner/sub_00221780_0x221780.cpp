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

// Function: sub_00221780
// Address: 0x221780 - 0x2218cc
void sub_00221780_0x221780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221780_0x221780");
#endif

    switch (ctx->pc) {
        case 0x2217c8u: goto label_2217c8;
        case 0x221810u: goto label_221810;
        case 0x221890u: goto label_221890;
        default: break;
    }

    ctx->pc = 0x221780u;

    // 0x221780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221784: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x221784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x221788: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x221788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22178c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22178cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221790: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x221790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x221794: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x221794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221798: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x221798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22179c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x22179cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2217a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2217a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2217a4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2217a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2217a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2217ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2217acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2217b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2217b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2217b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217b8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2217b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2217bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2217bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2217c0: 0xc088228  jal         func_2208A0
    ctx->pc = 0x2217C0u;
    SET_GPR_U32(ctx, 31, 0x2217C8u);
    ctx->pc = 0x2217C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217C0u;
    // 0x2217c4: 0x2455a178  addiu       $s5, $v0, -0x5E88 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208A0u, 0x2217C0u, 0x2217C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217C8u;
label_2217c8:
    // 0x2217c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2217c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2217cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2217ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2217d0: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x2217d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x2217d4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2217d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x2217d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2217d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2217dc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2217dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2217e0: 0x1446000d  bne         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2217E0u;
    {
        const bool branch_taken_0x2217e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2217E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E0u;
        // 0x2217e4: 0x502018  mult        $a0, $v0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217e0) {
            ctx->pc = 0x221818u;
            goto label_221818;
        }
    }
    ctx->pc = 0x2217E8u;
    // 0x2217e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2217e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2217ec: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2217ECu;
    {
        const bool branch_taken_0x2217ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2217ec) {
            ctx->pc = 0x2217F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2217ECu;
            // 0x2217f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221800u;
            goto label_221800;
        }
    }
    ctx->pc = 0x2217F4u;
    // 0x2217f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2217F4u;
    {
        const bool branch_taken_0x2217f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217F4u;
        // 0x2217f8: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217f4) {
            ctx->pc = 0x2218A8u;
            goto label_2218a8;
        }
    }
    ctx->pc = 0x2217FCu;
    // 0x2217fc: 0x0  nop
    ctx->pc = 0x2217fcu;
    // NOP
label_221800:
    // 0x221800: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x221800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221804: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x221804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221808: 0xc088634  jal         func_2218D0
    ctx->pc = 0x221808u;
    SET_GPR_U32(ctx, 31, 0x221810u);
    ctx->pc = 0x22180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221808u;
    // 0x22180c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2218D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2218D0u, 0x221808u, 0x221810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221810u;
label_221810:
    // 0x221810: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x221810u;
    {
        const bool branch_taken_0x221810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221810u;
        // 0x221814: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221810) {
            ctx->pc = 0x2218ACu;
            goto label_2218ac;
        }
    }
    ctx->pc = 0x221818u;
label_221818:
    // 0x221818: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x221818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x22181c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x22181cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221824: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x221824u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221828: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22182c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x22182cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x221830: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x221830u;
    {
        const bool branch_taken_0x221830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221830) {
            ctx->pc = 0x221834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221830u;
            // 0x221834: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221838u;
            goto label_221838;
        }
    }
    ctx->pc = 0x221838u;
label_221838:
    // 0x221838: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x221838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22183c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22183cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x221840: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x221840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221844: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x221844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x221848: 0x8e450a48  lw          $a1, 0xA48($s2)
    ctx->pc = 0x221848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2632)));
    // 0x22184c: 0x0  nop
    ctx->pc = 0x22184cu;
    // NOP
    // 0x221850: 0x0  nop
    ctx->pc = 0x221850u;
    // NOP
    // 0x221854: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x221854u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x221858: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x221858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22185c: 0x1812  mflo        $v1
    ctx->pc = 0x22185cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x221860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22186c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22186cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x221870: 0x0  nop
    ctx->pc = 0x221870u;
    // NOP
    // 0x221874: 0x0  nop
    ctx->pc = 0x221874u;
    // NOP
    // 0x221878: 0x46020343  div.s       $f13, $f0, $f2
    ctx->pc = 0x221878u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x22187c: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x22187Cu;
    {
        const bool branch_taken_0x22187c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x221880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22187Cu;
        // 0x221880: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22187c) {
            ctx->pc = 0x221898u;
            goto label_221898;
        }
    }
    ctx->pc = 0x221884u;
    // 0x221884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221888: 0xc088652  jal         func_221948
    ctx->pc = 0x221888u;
    SET_GPR_U32(ctx, 31, 0x221890u);
    ctx->pc = 0x22188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221888u;
    // 0x22188c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221948u, 0x221888u, 0x221890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221890u;
label_221890:
    // 0x221890: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x221890u;
    {
        const bool branch_taken_0x221890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221890u;
        // 0x221894: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221890) {
            ctx->pc = 0x2218ACu;
            goto label_2218ac;
        }
    }
    ctx->pc = 0x221898u;
label_221898:
    // 0x221898: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x221898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22189c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22189Cu;
    {
        const bool branch_taken_0x22189c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22189c) {
            ctx->pc = 0x2218A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22189Cu;
            // 0x2218a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2218A8u;
            goto label_2218a8;
        }
    }
    ctx->pc = 0x2218A4u;
    // 0x2218a4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2218a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_2218a8:
    // 0x2218a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2218a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2218ac:
    // 0x2218ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2218acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2218b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2218b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2218b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2218b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2218b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2218b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2218bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2218bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2218c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2218c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2218c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2218C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2218C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218C4u;
        // 0x2218c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2218C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2218CCu;
}
