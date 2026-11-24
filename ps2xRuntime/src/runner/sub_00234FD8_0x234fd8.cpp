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

// Function: sub_00234FD8
// Address: 0x234fd8 - 0x235054
void sub_00234FD8_0x234fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234FD8_0x234fd8");
#endif

    switch (ctx->pc) {
        case 0x234ffcu: goto label_234ffc;
        case 0x235004u: goto label_235004;
        case 0x23502cu: goto label_23502c;
        default: break;
    }

    ctx->pc = 0x234fd8u;

    // 0x234fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234fe8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x234fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234fec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234ff0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234ff4: 0xc08d42a  jal         func_2350A8
    ctx->pc = 0x234FF4u;
    SET_GPR_U32(ctx, 31, 0x234FFCu);
    ctx->pc = 0x234FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FF4u;
    // 0x234ff8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2350A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350A8u, 0x234FF4u, 0x234FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FFCu;
label_234ffc:
    // 0x234ffc: 0xc08cc32  jal         func_2330C8
    ctx->pc = 0x234FFCu;
    SET_GPR_U32(ctx, 31, 0x235004u);
    ctx->pc = 0x235000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FFCu;
    // 0x235000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2330C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2330C8u, 0x234FFCu, 0x235004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235004u;
label_235004:
    // 0x235004: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x235008: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x235008u;
    {
        const bool branch_taken_0x235008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x23500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235008u;
        // 0x23500c: 0xac50754c  sw          $s0, 0x754C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30028), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235008) {
            ctx->pc = 0x235038u;
            goto label_235038;
        }
    }
    ctx->pc = 0x235010u;
    // 0x235010: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235010u;
    {
        const bool branch_taken_0x235010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x235010) {
            ctx->pc = 0x235024u;
            goto label_235024;
        }
    }
    ctx->pc = 0x235018u;
    // 0x235018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23501c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23501Cu;
    {
        const bool branch_taken_0x23501c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23501c) {
            ctx->pc = 0x235020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23501Cu;
            // 0x235020: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235038u;
            goto label_235038;
        }
    }
    ctx->pc = 0x235024u;
label_235024:
    // 0x235024: 0xc08d008  jal         func_234020
    ctx->pc = 0x235024u;
    SET_GPR_U32(ctx, 31, 0x23502Cu);
    ctx->pc = 0x235028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235024u;
    // 0x235028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234020u, 0x235024u, 0x23502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23502Cu;
label_23502c:
    // 0x23502c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23502Cu;
    {
        const bool branch_taken_0x23502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23502Cu;
        // 0x235030: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23502c) {
            ctx->pc = 0x23503Cu;
            goto label_23503c;
        }
    }
    ctx->pc = 0x235034u;
    // 0x235034: 0x0  nop
    ctx->pc = 0x235034u;
    // NOP
label_235038:
    // 0x235038: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x235038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23503c:
    // 0x23503c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23503cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235048: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x235048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23504c: 0x3e00008  jr          $ra
    ctx->pc = 0x23504Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23504Cu;
        // 0x235050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23504Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235054u;
}
