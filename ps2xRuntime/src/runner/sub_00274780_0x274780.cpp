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

// Function: sub_00274780
// Address: 0x274780 - 0x274840
void sub_00274780_0x274780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274780_0x274780");
#endif

    switch (ctx->pc) {
        case 0x2747d4u: goto label_2747d4;
        case 0x2747e0u: goto label_2747e0;
        default: break;
    }

    ctx->pc = 0x274780u;

    // 0x274780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x274780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x274784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x274784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x274788: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x274788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27478c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x274790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274794: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x274794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27479c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x27479cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2747a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2747a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2747a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747a8: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2747a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2747ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2747acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747b0: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2747b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2747b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2747b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747b8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2747b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2747bc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2747bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2747c0: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2747c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2747c4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2747c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2747c8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2747c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2747cc: 0xc0a43fc  jal         func_290FF0
    ctx->pc = 0x2747CCu;
    SET_GPR_U32(ctx, 31, 0x2747D4u);
    ctx->pc = 0x2747D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747CCu;
    // 0x2747d0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x2747CCu, 0x2747D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747D4u;
label_2747d4:
    // 0x2747d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2747d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747d8: 0xc0a4408  jal         func_291020
    ctx->pc = 0x2747D8u;
    SET_GPR_U32(ctx, 31, 0x2747E0u);
    ctx->pc = 0x2747DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747D8u;
    // 0x2747dc: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x2747D8u, 0x2747E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747E0u;
label_2747e0:
    // 0x2747e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2747e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2747e4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x2747e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2747e8: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2747e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2747ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2747ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2747f0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2747f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2747f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2747f8: 0xa225002c  sb          $a1, 0x2C($s1)
    ctx->pc = 0x2747f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 5));
    // 0x2747fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2747fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x274800: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x274800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274804: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x274804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274808: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x274808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27480c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x27480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274810: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x274810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x274814: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x274814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x274818: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x274818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x27481c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x27481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x274820: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x274820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x274824: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x274824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27482c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27482cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274838: 0x3e00008  jr          $ra
    ctx->pc = 0x274838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274838u;
        // 0x27483c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274840u;
}
