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

// Function: sub_00347950
// Address: 0x347950 - 0x3479e4
void sub_00347950_0x347950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347950_0x347950");
#endif

    switch (ctx->pc) {
        case 0x3479a4u: goto label_3479a4;
        case 0x3479ccu: goto label_3479cc;
        default: break;
    }

    ctx->pc = 0x347950u;

    // 0x347950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x347954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x347958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34795c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347960: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x347960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347964: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x347964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347968: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x347968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34796c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34796cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x347970: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x347970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347974: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x347974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x347978: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x347978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34797c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34797cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x347980: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x347980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347984: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x347984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x347988: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x347988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34798c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x34798cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x347990: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x347990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347994: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x347994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x347998: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x347998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34799c: 0xc099b04  jal         func_266C10
    ctx->pc = 0x34799Cu;
    SET_GPR_U32(ctx, 31, 0x3479A4u);
    ctx->pc = 0x3479A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34799Cu;
    // 0x3479a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x34799Cu, 0x3479A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479A4u;
label_3479a4:
    // 0x3479a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3479a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479a8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3479A8u;
    {
        const bool branch_taken_0x3479a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3479a8) {
            ctx->pc = 0x3479D0u;
            goto label_3479d0;
        }
    }
    ctx->pc = 0x3479B0u;
    // 0x3479b0: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x3479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x3479b4: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x3479b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x3479b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3479b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3479bc: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x3479bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3479c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3479c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479c4: 0xc0ab36c  jal         func_2ACDB0
    ctx->pc = 0x3479C4u;
    SET_GPR_U32(ctx, 31, 0x3479CCu);
    ctx->pc = 0x3479C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479C4u;
    // 0x3479c8: 0x24e778b0  addiu       $a3, $a3, 0x78B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x3479C4u, 0x3479CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479CCu;
label_3479cc:
    // 0x3479cc: 0x0  nop
    ctx->pc = 0x3479ccu;
    // NOP
label_3479d0:
    // 0x3479d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3479d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3479d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3479d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3479d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3479d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3479dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3479DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3479E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479DCu;
        // 0x3479e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3479DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3479E4u;
}
