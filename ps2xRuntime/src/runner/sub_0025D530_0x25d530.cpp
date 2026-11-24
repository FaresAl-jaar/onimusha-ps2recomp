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

// Function: sub_0025D530
// Address: 0x25d530 - 0x25d650
void sub_0025D530_0x25d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D530_0x25d530");
#endif

    switch (ctx->pc) {
        case 0x25d590u: goto label_25d590;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d5b4u: goto label_25d5b4;
        case 0x25d5c4u: goto label_25d5c4;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d608u: goto label_25d608;
        case 0x25d62cu: goto label_25d62c;
        default: break;
    }

    ctx->pc = 0x25d530u;

    // 0x25d530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25d534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25d53c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25d540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25d544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d548: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d54c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25d550: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25d550u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25d554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d558: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25d558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d55c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25d55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d560: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25d560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d564: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d568: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d56c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25d56cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25d570: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25d570u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25d574: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x25d574u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x25d578: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x25d578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25d57c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x25d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x25d580: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x25d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d584: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x25d584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x25d588: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25D588u;
    SET_GPR_U32(ctx, 31, 0x25D590u);
    ctx->pc = 0x25D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D588u;
    // 0x25d58c: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25D588u, 0x25D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D590u;
label_25d590:
    // 0x25d590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d594: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x25D594u;
    SET_GPR_U32(ctx, 31, 0x25D59Cu);
    ctx->pc = 0x25D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D594u;
    // 0x25d598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x25D594u, 0x25D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D59Cu;
label_25d59c:
    // 0x25d59c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x25D59Cu;
    SET_GPR_U32(ctx, 31, 0x25D5A4u);
    ctx->pc = 0x25D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D59Cu;
    // 0x25d5a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x25D59Cu, 0x25D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5A4u;
label_25d5a4:
    // 0x25d5a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25d5a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x25d5a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d5ac: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25D5ACu;
    SET_GPR_U32(ctx, 31, 0x25D5B4u);
    ctx->pc = 0x25D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5ACu;
    // 0x25d5b0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25D5ACu, 0x25D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5B4u;
label_25d5b4:
    // 0x25d5b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d5b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25d5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5bc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x25D5BCu;
    SET_GPR_U32(ctx, 31, 0x25D5C4u);
    ctx->pc = 0x25D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5BCu;
    // 0x25d5c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x25D5BCu, 0x25D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5C4u;
label_25d5c4:
    // 0x25d5c4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x25d5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x25d5c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d5cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x25d5d0: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x25d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x25d5d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25d5d8: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x25D5D8u;
    SET_GPR_U32(ctx, 31, 0x25D5E0u);
    ctx->pc = 0x25D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5D8u;
    // 0x25d5dc: 0xe6150000  swc1        $f21, 0x0($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x25D5D8u, 0x25D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5E0u;
label_25d5e0:
    // 0x25d5e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D5E0u;
    {
        const bool branch_taken_0x25d5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5e0) {
            ctx->pc = 0x25D5F0u;
            goto label_25d5f0;
        }
    }
    ctx->pc = 0x25D5E8u;
    // 0x25d5e8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x25d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25d5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25d5f0:
    // 0x25d5f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x25d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x25d5f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d5f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25d5fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d600: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x25D600u;
    SET_GPR_U32(ctx, 31, 0x25D608u);
    ctx->pc = 0x25D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D600u;
    // 0x25d604: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x25D600u, 0x25D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D608u;
label_25d608:
    // 0x25d608: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x25d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d610: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25d614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d618: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x25d618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25d61c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x25d61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25d620: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x25d620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x25d624: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x25D624u;
    SET_GPR_U32(ctx, 31, 0x25D62Cu);
    ctx->pc = 0x25D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D624u;
    // 0x25d628: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x25D624u, 0x25D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D62Cu;
label_25d62c:
    // 0x25d62c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d630: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25d634: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25d634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d638: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25d638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d63c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25d63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d640: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d644: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d648: 0x3e00008  jr          $ra
    ctx->pc = 0x25D648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D648u;
        // 0x25d64c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D650u;
}
