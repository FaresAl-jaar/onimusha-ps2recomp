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

// Function: sub_002011C8
// Address: 0x2011c8 - 0x201258
void sub_002011C8_0x2011c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002011C8_0x2011c8");
#endif

    switch (ctx->pc) {
        case 0x201200u: goto label_201200;
        default: break;
    }

    ctx->pc = 0x2011c8u;

    // 0x2011c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2011c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2011cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2011ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2011d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2011d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2011d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2011d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2011d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2011dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2011e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2011e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2011E4u;
    {
        const bool branch_taken_0x2011e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2011E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011E4u;
        // 0x2011e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011e4) {
            ctx->pc = 0x2011F8u;
            goto label_2011f8;
        }
    }
    ctx->pc = 0x2011ECu;
    // 0x2011ec: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x2011ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x2011f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2011F0u;
    {
        const bool branch_taken_0x2011f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F0u;
        // 0x2011f4: 0x24443f40  addiu       $a0, $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011f0) {
            ctx->pc = 0x20122Cu;
            goto label_20122c;
        }
    }
    ctx->pc = 0x2011F8u;
label_2011f8:
    // 0x2011f8: 0xc080496  jal         func_201258
    ctx->pc = 0x2011F8u;
    SET_GPR_U32(ctx, 31, 0x201200u);
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x2011F8u, 0x201200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201200u;
label_201200:
    // 0x201200: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x201200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x201204: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201204u;
    {
        const bool branch_taken_0x201204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201204u;
        // 0x201208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201204) {
            ctx->pc = 0x201228u;
            goto label_201228;
        }
    }
    ctx->pc = 0x20120Cu;
    // 0x20120c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20120cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201210: 0x34a50210  ori         $a1, $a1, 0x210
    ctx->pc = 0x201210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
    // 0x201214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201218: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20121c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20121cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201220: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x201220u;
    ctx->pc = 0x201224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201220u;
    // 0x201224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x201228u;
label_201228:
    // 0x201228: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x201228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_20122c:
    // 0x20122c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x201230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20123c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201244: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x201244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201248: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x201248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x20124c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20124cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201250: 0x3e00008  jr          $ra
    ctx->pc = 0x201250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201250u;
        // 0x201254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201258u;
}
