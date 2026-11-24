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

// Function: sub_001C1540
// Address: 0x1c1540 - 0x1c1608
void sub_001C1540_0x1c1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1540_0x1c1540");
#endif

    switch (ctx->pc) {
        case 0x1c1560u: goto label_1c1560;
        case 0x1c156cu: goto label_1c156c;
        default: break;
    }

    ctx->pc = 0x1c1540u;

    // 0x1c1540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1544: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c1548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c154c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c1554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1558: 0xc070608  jal         func_1C1820
    ctx->pc = 0x1C1558u;
    SET_GPR_U32(ctx, 31, 0x1C1560u);
    ctx->pc = 0x1C155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1558u;
    // 0x1c155c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1820u, 0x1C1558u, 0x1C1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1560u;
label_1c1560:
    // 0x1c1560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1564: 0xc07060c  jal         func_1C1830
    ctx->pc = 0x1C1564u;
    SET_GPR_U32(ctx, 31, 0x1C156Cu);
    ctx->pc = 0x1C1568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1564u;
    // 0x1c1568: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1830u, 0x1C1564u, 0x1C156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C156Cu;
label_1c156c:
    // 0x1c156c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1c156cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1c1570: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x1c1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x1c1574: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1578: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c1578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c157c: 0x461400c1  sub.s       $f3, $f0, $f20
    ctx->pc = 0x1c157cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c1580: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1584: 0x4614101a  mula.s      $f2, $f20
    ctx->pc = 0x1c1584u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x1c1588: 0x4600085d  msub.s      $f1, $f1, $f0
    ctx->pc = 0x1c1588u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1c158c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c158cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c1590: 0x46030883  div.s       $f2, $f1, $f3
    ctx->pc = 0x1c1590u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1c1594: 0x0  nop
    ctx->pc = 0x1c1594u;
    // NOP
    // 0x1c1598: 0x0  nop
    ctx->pc = 0x1c1598u;
    // NOP
    // 0x1c159c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C159Cu;
    {
        const bool branch_taken_0x1c159c = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x1c159c) {
            ctx->pc = 0x1C15B0u;
            goto label_1c15b0;
        }
    }
    ctx->pc = 0x1C15A4u;
    // 0x1c15a4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1c15a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c15a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C15A8u;
    {
        const bool branch_taken_0x1c15a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15A8u;
        // 0x1c15ac: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15a8) {
            ctx->pc = 0x1C15CCu;
            goto label_1c15cc;
        }
    }
    ctx->pc = 0x1C15B0u;
label_1c15b0:
    // 0x1c15b0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1c15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1c15b4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1c15b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c15b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c15b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c15bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c15bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c15c0: 0x0  nop
    ctx->pc = 0x1c15c0u;
    // NOP
    // 0x1c15c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c15c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c15c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c15c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c15cc:
    // 0x1c15cc: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x1c15ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c15d0: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1c15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1c15d4: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x1c15d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
    // 0x1c15d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c15d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c15dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c15dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c15e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c15e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c15e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c15e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c15e8: 0x0  nop
    ctx->pc = 0x1c15e8u;
    // NOP
    // 0x1c15ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c15ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c15f0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c15f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c15f4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1c15f4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1c15f8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c15f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c15fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1600: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1600u;
        // 0x1c1604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1608u;
}
