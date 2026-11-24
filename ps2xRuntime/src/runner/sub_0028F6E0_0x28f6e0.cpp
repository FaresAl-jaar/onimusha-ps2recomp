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

// Function: sub_0028F6E0
// Address: 0x28f6e0 - 0x28f768
void sub_0028F6E0_0x28f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F6E0_0x28f6e0");
#endif

    switch (ctx->pc) {
        case 0x28f758u: goto label_28f758;
        default: break;
    }

    ctx->pc = 0x28f6e0u;

    // 0x28f6e0: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x28f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x28f6e4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x28f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x28f6e8: 0x410c3  sra         $v0, $a0, 3
    ctx->pc = 0x28f6e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 3));
    // 0x28f6ec: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x28f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x28f6f0: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x28f6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f6f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f6f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f6f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28f6fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f700: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F700u;
    {
        const bool branch_taken_0x28f700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F700u;
        // 0x28f704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f700) {
            ctx->pc = 0x28F738u;
            goto label_28f738;
        }
    }
    ctx->pc = 0x28F708u;
    // 0x28f708: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f70c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F70Cu;
    {
        const bool branch_taken_0x28f70c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F70Cu;
        // 0x28f710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f70c) {
            ctx->pc = 0x28F730u;
            goto label_28f730;
        }
    }
    ctx->pc = 0x28F714u;
    // 0x28f714: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F714u;
    {
        const bool branch_taken_0x28f714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f714) {
            ctx->pc = 0x28F728u;
            goto label_28f728;
        }
    }
    ctx->pc = 0x28F71Cu;
    // 0x28f71c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28F71Cu;
    {
        const bool branch_taken_0x28f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f71c) {
            ctx->pc = 0x28F748u;
            goto label_28f748;
        }
    }
    ctx->pc = 0x28F724u;
    // 0x28f724: 0x0  nop
    ctx->pc = 0x28f724u;
    // NOP
label_28f728:
    // 0x28f728: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F728u;
    {
        const bool branch_taken_0x28f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F728u;
        // 0x28f72c: 0x90e60000  lbu         $a2, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f728) {
            ctx->pc = 0x28F748u;
            goto label_28f748;
        }
    }
    ctx->pc = 0x28F730u;
label_28f730:
    // 0x28f730: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F730u;
    {
        const bool branch_taken_0x28f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F730u;
        // 0x28f734: 0x94e60000  lhu         $a2, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f730) {
            ctx->pc = 0x28F748u;
            goto label_28f748;
        }
    }
    ctx->pc = 0x28F738u;
label_28f738:
    // 0x28f738: 0x41143  sra         $v0, $a0, 5
    ctx->pc = 0x28f738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
    // 0x28f73c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f740: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28f740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f744: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28f744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28f748:
    // 0x28f748: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28f748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28f74c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28f74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f750: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x28F750u;
    SET_GPR_U32(ctx, 31, 0x28F758u);
    ctx->pc = 0x28F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F750u;
    // 0x28f754: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x28F750u, 0x28F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F758u;
label_28f758:
    // 0x28f758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f75c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f760: 0x3e00008  jr          $ra
    ctx->pc = 0x28F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F760u;
        // 0x28f764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F768u;
}
