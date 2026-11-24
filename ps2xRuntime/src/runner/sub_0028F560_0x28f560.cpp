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

// Function: sub_0028F560
// Address: 0x28f560 - 0x28f660
void sub_0028F560_0x28f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F560_0x28f560");
#endif

    switch (ctx->pc) {
        case 0x28f5c8u: goto label_28f5c8;
        case 0x28f5d0u: goto label_28f5d0;
        case 0x28f5dcu: goto label_28f5dc;
        case 0x28f638u: goto label_28f638;
        case 0x28f648u: goto label_28f648;
        default: break;
    }

    ctx->pc = 0x28f560u;

    // 0x28f560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28f564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28f568: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x28f568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28f56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f570: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x28f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28f574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f57c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x28f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f580: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28f580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f584: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x28f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f588: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f58c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x28f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f590: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x28f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f594: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x28f594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28f598: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x28f598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28f59c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28f59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28f5a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28f5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28f5a4: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x28f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f5a8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x28f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f5ac: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x28f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f5b0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x28f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f5b4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28f5b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28f5b8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28f5b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f5bc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28f5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28f5c0: 0xc09d210  jal         func_274840
    ctx->pc = 0x28F5C0u;
    SET_GPR_U32(ctx, 31, 0x28F5C8u);
    ctx->pc = 0x28F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5C0u;
    // 0x28f5c4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x274840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274840u, 0x28F5C0u, 0x28F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5C8u;
label_28f5c8:
    // 0x28f5c8: 0xc0a43fc  jal         func_290FF0
    ctx->pc = 0x28F5C8u;
    SET_GPR_U32(ctx, 31, 0x28F5D0u);
    ctx->pc = 0x28F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5C8u;
    // 0x28f5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x28F5C8u, 0x28F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5D0u;
label_28f5d0:
    // 0x28f5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5d4: 0xc0a4408  jal         func_291020
    ctx->pc = 0x28F5D4u;
    SET_GPR_U32(ctx, 31, 0x28F5DCu);
    ctx->pc = 0x28F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5D4u;
    // 0x28f5d8: 0xa3a20059  sb          $v0, 0x59($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x28F5D4u, 0x28F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5DCu;
label_28f5dc:
    // 0x28f5dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f5e0: 0x24030202  addiu       $v1, $zero, 0x202
    ctx->pc = 0x28f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x28f5e4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x28f5e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f5f0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x28f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x28f5f4: 0xa3a2005c  sb          $v0, 0x5C($sp)
    ctx->pc = 0x28f5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x28f5f8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x28f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28f5fc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f600: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x28f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x28f604: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f608: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f60c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f610: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x28f610u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28f614: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28f614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f618: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x28f618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28f61c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28f61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28f620: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x28f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f624: 0xa7b0004c  sh          $s0, 0x4C($sp)
    ctx->pc = 0x28f624u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 16));
    // 0x28f628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f62c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28f62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f630: 0xc09d1ac  jal         func_2746B0
    ctx->pc = 0x28F630u;
    SET_GPR_U32(ctx, 31, 0x28F638u);
    ctx->pc = 0x28F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F630u;
    // 0x28f634: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2746B0u, 0x28F630u, 0x28F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F638u;
label_28f638:
    // 0x28f638: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f63c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x28f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x28f640: 0xc0e3660  jal         func_38D980
    ctx->pc = 0x28F640u;
    SET_GPR_U32(ctx, 31, 0x28F648u);
    ctx->pc = 0x28F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F640u;
    // 0x28f644: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D980u, 0x28F640u, 0x28F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F648u;
label_28f648:
    // 0x28f648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f64c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f658: 0x3e00008  jr          $ra
    ctx->pc = 0x28F658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F658u;
        // 0x28f65c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F660u;
}
