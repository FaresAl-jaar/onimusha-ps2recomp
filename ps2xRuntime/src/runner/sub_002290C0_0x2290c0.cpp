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

// Function: sub_002290C0
// Address: 0x2290c0 - 0x229154
void sub_002290C0_0x2290c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002290C0_0x2290c0");
#endif

    switch (ctx->pc) {
        case 0x2290dcu: goto label_2290dc;
        case 0x2290f8u: goto label_2290f8;
        case 0x229100u: goto label_229100;
        case 0x229108u: goto label_229108;
        case 0x229110u: goto label_229110;
        case 0x22911cu: goto label_22911c;
        case 0x229124u: goto label_229124;
        default: break;
    }

    ctx->pc = 0x2290c0u;

    // 0x2290c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2290c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2290c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2290c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2290c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2290c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2290cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2290ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2290d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2290d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2290d4: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x2290D4u;
    SET_GPR_U32(ctx, 31, 0x2290DCu);
    ctx->pc = 0x2290D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290D4u;
    // 0x2290d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x2290D4u, 0x2290DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290DCu;
label_2290dc:
    // 0x2290dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2290e0: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2290e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2290e4: 0x8e5000c0  lw          $s0, 0xC0($s2)
    ctx->pc = 0x2290e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x2290e8: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2290E8u;
    {
        const bool branch_taken_0x2290e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2290e8) {
            ctx->pc = 0x2290ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2290E8u;
            // 0x2290ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229140u;
            goto label_229140;
        }
    }
    ctx->pc = 0x2290F0u;
    // 0x2290f0: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x2290F0u;
    SET_GPR_U32(ctx, 31, 0x2290F8u);
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x2290F0u, 0x2290F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290F8u;
label_2290f8:
    // 0x2290f8: 0xc08a172  jal         func_2285C8
    ctx->pc = 0x2290F8u;
    SET_GPR_U32(ctx, 31, 0x229100u);
    ctx->pc = 0x2290FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290F8u;
    // 0x2290fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C8u, 0x2290F8u, 0x229100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229100u;
label_229100:
    // 0x229100: 0xc08a150  jal         func_228540
    ctx->pc = 0x229100u;
    SET_GPR_U32(ctx, 31, 0x229108u);
    ctx->pc = 0x229104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229100u;
    // 0x229104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228540u, 0x229100u, 0x229108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229108u;
label_229108:
    // 0x229108: 0xc08d1fc  jal         func_2347F0
    ctx->pc = 0x229108u;
    SET_GPR_U32(ctx, 31, 0x229110u);
    ctx->pc = 0x22910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229108u;
    // 0x22910c: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347F0u, 0x229108u, 0x229110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229110u;
label_229110:
    // 0x229110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229114: 0xc08d4f2  jal         func_2353C8
    ctx->pc = 0x229114u;
    SET_GPR_U32(ctx, 31, 0x22911Cu);
    ctx->pc = 0x229118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229114u;
    // 0x229118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2353C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353C8u, 0x229114u, 0x22911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22911Cu;
label_22911c:
    // 0x22911c: 0xc08d504  jal         func_235410
    ctx->pc = 0x22911Cu;
    SET_GPR_U32(ctx, 31, 0x229124u);
    ctx->pc = 0x229120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22911Cu;
    // 0x229120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235410u, 0x22911Cu, 0x229124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229124u;
label_229124:
    // 0x229124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x229128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22912c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22912cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229130: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x229130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x229134: 0x808a0f4  j           func_2283D0
    ctx->pc = 0x229134u;
    ctx->pc = 0x229138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229134u;
    // 0x229138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283D0u;
    sub_002283D0_0x2283d0(rdram, ctx, runtime); return;
    ctx->pc = 0x22913Cu;
    // 0x22913c: 0x0  nop
    ctx->pc = 0x22913cu;
    // NOP
label_229140:
    // 0x229140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x229140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x229144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x229144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229148: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x229148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22914c: 0x3e00008  jr          $ra
    ctx->pc = 0x22914Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22914Cu;
        // 0x229150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22914Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229154u;
}
