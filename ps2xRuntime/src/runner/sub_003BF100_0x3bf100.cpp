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

// Function: sub_003BF100
// Address: 0x3bf100 - 0x3bf1bc
void sub_003BF100_0x3bf100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF100_0x3bf100");
#endif

    switch (ctx->pc) {
        case 0x3bf134u: goto label_3bf134;
        case 0x3bf144u: goto label_3bf144;
        case 0x3bf160u: goto label_3bf160;
        case 0x3bf170u: goto label_3bf170;
        case 0x3bf180u: goto label_3bf180;
        case 0x3bf19cu: goto label_3bf19c;
        default: break;
    }

    ctx->pc = 0x3bf100u;

    // 0x3bf100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bf100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bf104: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bf104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bf108: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bf108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3bf10c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bf10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bf110: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bf110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bf114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bf118: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bf118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bf120: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3bf120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf124: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BF124u;
    {
        const bool branch_taken_0x3bf124 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF124u;
        // 0x3bf128: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf124) {
            ctx->pc = 0x3BF168u;
            goto label_3bf168;
        }
    }
    ctx->pc = 0x3BF12Cu;
    // 0x3bf12c: 0xc0ef8e4  jal         func_3BE390
    ctx->pc = 0x3BF12Cu;
    SET_GPR_U32(ctx, 31, 0x3BF134u);
    ctx->pc = 0x3BF130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF12Cu;
    // 0x3bf130: 0x2405ff38  addiu       $a1, $zero, -0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE390u, 0x3BF12Cu, 0x3BF134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF134u;
label_3bf134:
    // 0x3bf134: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bf134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf138: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf13c: 0xc0ef9c4  jal         func_3BE710
    ctx->pc = 0x3BF13Cu;
    SET_GPR_U32(ctx, 31, 0x3BF144u);
    ctx->pc = 0x3BF140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF13Cu;
    // 0x3bf140: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE710u, 0x3BF13Cu, 0x3BF144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF144u;
label_3bf144:
    // 0x3bf144: 0x3c024590  lui         $v0, 0x4590
    ctx->pc = 0x3bf144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17808 << 16));
    // 0x3bf148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf14c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3bf14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3bf150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf154: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf158: 0xc0efbdc  jal         func_3BEF70
    ctx->pc = 0x3BF158u;
    SET_GPR_U32(ctx, 31, 0x3BF160u);
    ctx->pc = 0x3BF15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF158u;
    // 0x3bf15c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEF70u, 0x3BF158u, 0x3BF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF160u;
label_3bf160:
    // 0x3bf160: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BF160u;
    {
        const bool branch_taken_0x3bf160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf160) {
            ctx->pc = 0x3BF1A0u;
            goto label_3bf1a0;
        }
    }
    ctx->pc = 0x3BF168u;
label_3bf168:
    // 0x3bf168: 0xc0ef8e4  jal         func_3BE390
    ctx->pc = 0x3BF168u;
    SET_GPR_U32(ctx, 31, 0x3BF170u);
    ctx->pc = 0x3BF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF168u;
    // 0x3bf16c: 0x2405fce0  addiu       $a1, $zero, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE390u, 0x3BF168u, 0x3BF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF170u;
label_3bf170:
    // 0x3bf170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bf170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf178: 0xc0ef9c4  jal         func_3BE710
    ctx->pc = 0x3BF178u;
    SET_GPR_U32(ctx, 31, 0x3BF180u);
    ctx->pc = 0x3BF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF178u;
    // 0x3bf17c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE710u, 0x3BF178u, 0x3BF180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF180u;
label_3bf180:
    // 0x3bf180: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x3bf180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x3bf184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf188: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x3bf188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x3bf18c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf190: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf194: 0xc0efbdc  jal         func_3BEF70
    ctx->pc = 0x3BF194u;
    SET_GPR_U32(ctx, 31, 0x3BF19Cu);
    ctx->pc = 0x3BF198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF194u;
    // 0x3bf198: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEF70u, 0x3BF194u, 0x3BF19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF19Cu;
label_3bf19c:
    // 0x3bf19c: 0x0  nop
    ctx->pc = 0x3bf19cu;
    // NOP
label_3bf1a0:
    // 0x3bf1a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bf1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bf1a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bf1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf1a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bf1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bf1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1B4u;
        // 0x3bf1b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF1BCu;
}
