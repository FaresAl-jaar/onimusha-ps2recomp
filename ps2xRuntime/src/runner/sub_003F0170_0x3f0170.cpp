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

// Function: sub_003F0170
// Address: 0x3f0170 - 0x3f01fc
void sub_003F0170_0x3f0170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0170_0x3f0170");
#endif

    switch (ctx->pc) {
        case 0x3f01f0u: goto label_3f01f0;
        default: break;
    }

    ctx->pc = 0x3f0170u;

    // 0x3f0170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f0170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f0174: 0x96c3c  dsll32      $t5, $t1, 16
    ctx->pc = 0x3f0174u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) << (32 + 16));
    // 0x3f0178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f0178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f017c: 0xa4c3c  dsll32      $t1, $t2, 16
    ctx->pc = 0x3f017cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 16));
    // 0x3f0180: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f0184: 0x310c00ff  andi        $t4, $t0, 0xFF
    ctx->pc = 0x3f0184u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3f0188: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f018c: 0xb1c3c  dsll32      $v1, $t3, 16
    ctx->pc = 0x3f018cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 16));
    // 0x3f0190: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f0194: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x3f0194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3f0198: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f019c: 0x27ae0030  addiu       $t6, $sp, 0x30
    ctx->pc = 0x3f019cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f01a0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3f01a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f01a4: 0xd6c3f  dsra32      $t5, $t5, 16
    ctx->pc = 0x3f01a4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 16));
    // 0x3f01a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3f01a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3f01ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f01acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3f01b0: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x3f01b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3f01b4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x3f01b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x3f01b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f01b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f01bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f01bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f01c0: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x3f01c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f01c4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3f01c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f01c8: 0xe5c30000  swc1        $f3, 0x0($t6)
    ctx->pc = 0x3f01c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x3f01cc: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x3f01ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x3f01d0: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x3f01d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x3f01d4: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x3f01d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x3f01d8: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x3f01d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x3f01dc: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x3f01dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x3f01e0: 0xffac0008  sd          $t4, 0x8($sp)
    ctx->pc = 0x3f01e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 12));
    // 0x3f01e4: 0xffae0010  sd          $t6, 0x10($sp)
    ctx->pc = 0x3f01e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 14));
    // 0x3f01e8: 0xc0d1b34  jal         func_346CD0
    ctx->pc = 0x3F01E8u;
    SET_GPR_U32(ctx, 31, 0x3F01F0u);
    ctx->pc = 0x3F01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F01E8u;
    // 0x3f01ec: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346CD0u, 0x3F01E8u, 0x3F01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F01F0u;
label_3f01f0:
    // 0x3f01f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f01f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f01f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F01F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F01F4u;
        // 0x3f01f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F01F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F01FCu;
}
