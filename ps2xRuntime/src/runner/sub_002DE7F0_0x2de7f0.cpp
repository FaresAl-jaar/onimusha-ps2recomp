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

// Function: sub_002DE7F0
// Address: 0x2de7f0 - 0x2de8c8
void sub_002DE7F0_0x2de7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE7F0_0x2de7f0");
#endif

    switch (ctx->pc) {
        case 0x2de82cu: goto label_2de82c;
        case 0x2de844u: goto label_2de844;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de874u: goto label_2de874;
        case 0x2de894u: goto label_2de894;
        case 0x2de8b0u: goto label_2de8b0;
        default: break;
    }

    ctx->pc = 0x2de7f0u;

    // 0x2de7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de804: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2DE804u;
    {
        const bool branch_taken_0x2de804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE804u;
        // 0x2de808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de804) {
            ctx->pc = 0x2DE8B0u;
            goto label_2de8b0;
        }
    }
    ctx->pc = 0x2DE80Cu;
    // 0x2de80c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2de80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2de810: 0x24427a10  addiu       $v0, $v0, 0x7A10
    ctx->pc = 0x2de810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
    // 0x2de814: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2de814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2de818: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x2de818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2de81c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE81Cu;
    {
        const bool branch_taken_0x2de81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de81c) {
            ctx->pc = 0x2DE830u;
            goto label_2de830;
        }
    }
    ctx->pc = 0x2DE824u;
    // 0x2de824: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DE824u;
    SET_GPR_U32(ctx, 31, 0x2DE82Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DE824u, 0x2DE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE82Cu;
label_2de82c:
    // 0x2de82c: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x2de82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_2de830:
    // 0x2de830: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x2de830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2de834: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE834u;
    {
        const bool branch_taken_0x2de834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de834) {
            ctx->pc = 0x2DE848u;
            goto label_2de848;
        }
    }
    ctx->pc = 0x2DE83Cu;
    // 0x2de83c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DE83Cu;
    SET_GPR_U32(ctx, 31, 0x2DE844u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DE83Cu, 0x2DE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE844u;
label_2de844:
    // 0x2de844: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x2de844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_2de848:
    // 0x2de848: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2de84c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE84Cu;
    {
        const bool branch_taken_0x2de84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de84c) {
            ctx->pc = 0x2DE860u;
            goto label_2de860;
        }
    }
    ctx->pc = 0x2DE854u;
    // 0x2de854: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DE854u;
    SET_GPR_U32(ctx, 31, 0x2DE85Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DE854u, 0x2DE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE85Cu;
label_2de85c:
    // 0x2de85c: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x2de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_2de860:
    // 0x2de860: 0x8e2400e8  lw          $a0, 0xE8($s1)
    ctx->pc = 0x2de860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2de864: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE864u;
    {
        const bool branch_taken_0x2de864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de864) {
            ctx->pc = 0x2DE878u;
            goto label_2de878;
        }
    }
    ctx->pc = 0x2DE86Cu;
    // 0x2de86c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DE86Cu;
    SET_GPR_U32(ctx, 31, 0x2DE874u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DE86Cu, 0x2DE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE874u;
label_2de874:
    // 0x2de874: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x2de874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_2de878:
    // 0x2de878: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE878u;
    {
        const bool branch_taken_0x2de878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE878u;
        // 0x2de87c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de878) {
            ctx->pc = 0x2DE898u;
            goto label_2de898;
        }
    }
    ctx->pc = 0x2DE880u;
    // 0x2de880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de884: 0x244275c0  addiu       $v0, $v0, 0x75C0
    ctx->pc = 0x2de884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x2de888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de88c: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2DE88Cu;
    SET_GPR_U32(ctx, 31, 0x2DE894u);
    ctx->pc = 0x2DE890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE88Cu;
    // 0x2de890: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2DE88Cu, 0x2DE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE894u;
label_2de894:
    // 0x2de894: 0x0  nop
    ctx->pc = 0x2de894u;
    // NOP
label_2de898:
    // 0x2de898: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2de898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2de89c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2de89cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2de8a0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE8A0u;
    {
        const bool branch_taken_0x2de8a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8A0u;
        // 0x2de8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8a0) {
            ctx->pc = 0x2DE8B0u;
            goto label_2de8b0;
        }
    }
    ctx->pc = 0x2DE8A8u;
    // 0x2de8a8: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DE8A8u;
    SET_GPR_U32(ctx, 31, 0x2DE8B0u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DE8A8u, 0x2DE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8B0u;
label_2de8b0:
    // 0x2de8b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2de8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de8b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8C0u;
        // 0x2de8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE8C8u;
}
