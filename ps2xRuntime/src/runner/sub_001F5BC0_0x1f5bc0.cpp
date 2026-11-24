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

// Function: sub_001F5BC0
// Address: 0x1f5bc0 - 0x1f5c6c
void sub_001F5BC0_0x1f5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5BC0_0x1f5bc0");
#endif

    ctx->pc = 0x1f5bc0u;

    // 0x1f5bc0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f5bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f5bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5bc8: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x1f5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1f5bcc: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f5bd0: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x1f5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x1f5bd4: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x1f5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x1f5bd8: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x1f5bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f5bdc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f5bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f5be0: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x1f5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1f5be4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1f5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1f5be8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1f5be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1f5bec: 0x8d270048  lw          $a3, 0x48($t1)
    ctx->pc = 0x1f5becu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x1f5bf0: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1f5bf4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1f5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1f5bf8: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x1f5bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1f5bfc: 0xad2302cc  sw          $v1, 0x2CC($t1)
    ctx->pc = 0x1f5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 716), GPR_U32(ctx, 3));
    // 0x1f5c00: 0xad2402c4  sw          $a0, 0x2C4($t1)
    ctx->pc = 0x1f5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 708), GPR_U32(ctx, 4));
    // 0x1f5c04: 0x14e80004  bne         $a3, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C04u;
    {
        const bool branch_taken_0x1f5c04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x1F5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C04u;
        // 0x1f5c08: 0xad2602c8  sw          $a2, 0x2C8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 712), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c04) {
            ctx->pc = 0x1F5C18u;
            goto label_1f5c18;
        }
    }
    ctx->pc = 0x1F5C0Cu;
    // 0x1f5c0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F5C0Cu;
    {
        const bool branch_taken_0x1f5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C0Cu;
        // 0x1f5c10: 0xad2502d0  sw          $a1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c0c) {
            ctx->pc = 0x1F5C40u;
            goto label_1f5c40;
        }
    }
    ctx->pc = 0x1F5C14u;
    // 0x1f5c14: 0x0  nop
    ctx->pc = 0x1f5c14u;
    // NOP
label_1f5c18:
    // 0x1f5c18: 0x8d230118  lw          $v1, 0x118($t1)
    ctx->pc = 0x1f5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x1f5c1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5c20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5C20u;
    {
        const bool branch_taken_0x1f5c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C20u;
        // 0x1f5c24: 0x24c2001f  addiu       $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c20) {
            ctx->pc = 0x1F5C38u;
            goto label_1f5c38;
        }
    }
    ctx->pc = 0x1F5C28u;
    // 0x1f5c28: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1f5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1f5c2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5C2Cu;
    {
        const bool branch_taken_0x1f5c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C2Cu;
        // 0x1f5c30: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c2c) {
            ctx->pc = 0x1F5C3Cu;
            goto label_1f5c3c;
        }
    }
    ctx->pc = 0x1F5C34u;
    // 0x1f5c34: 0x0  nop
    ctx->pc = 0x1f5c34u;
    // NOP
label_1f5c38:
    // 0x1f5c38: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_1f5c3c:
    // 0x1f5c3c: 0xad2202d0  sw          $v0, 0x2D0($t1)
    ctx->pc = 0x1f5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 2));
label_1f5c40:
    // 0x1f5c40: 0x8d2302cc  lw          $v1, 0x2CC($t1)
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 716)));
    // 0x1f5c44: 0x8d2402d0  lw          $a0, 0x2D0($t1)
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
    // 0x1f5c48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f5c4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1f5c50: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1f5c50u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f5c54: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x1f5c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1f5c58: 0xad2503bc  sw          $a1, 0x3BC($t1)
    ctx->pc = 0x1f5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 956), GPR_U32(ctx, 5));
    // 0x1f5c5c: 0xad2203c0  sw          $v0, 0x3C0($t1)
    ctx->pc = 0x1f5c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 960), GPR_U32(ctx, 2));
    // 0x1f5c60: 0xad2303b4  sw          $v1, 0x3B4($t1)
    ctx->pc = 0x1f5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 948), GPR_U32(ctx, 3));
    // 0x1f5c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C64u;
        // 0x1f5c68: 0xad2403b8  sw          $a0, 0x3B8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 952), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C6Cu;
}
