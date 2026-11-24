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

// Function: sub_00125AC0
// Address: 0x125ac0 - 0x125b3c
void sub_00125AC0_0x125ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125AC0_0x125ac0");
#endif

    ctx->pc = 0x125ac0u;

    // 0x125ac0: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x125ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x125ac4: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x125ac4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x125ac8: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125AC8u;
    {
        const bool branch_taken_0x125ac8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AC8u;
        // 0x125acc: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ac8) {
            ctx->pc = 0x125AD8u;
            goto label_125ad8;
        }
    }
    ctx->pc = 0x125AD0u;
    // 0x125ad0: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125ad4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x125ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_125ad8:
    // 0x125ad8: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x125adc: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x125adcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x125ae0: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125AE0u;
    {
        const bool branch_taken_0x125ae0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AE0u;
        // 0x125ae4: 0x3c0ff000  lui         $t7, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ae0) {
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x125AE8u;
    // 0x125ae8: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x125ae8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x125aec: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_125af0:
    // 0x125af0: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x125af4: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125AF4u;
    {
        const bool branch_taken_0x125af4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AF4u;
        // 0x125af8: 0x3c0fc000  lui         $t7, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125af4) {
            ctx->pc = 0x125B04u;
            goto label_125b04;
        }
    }
    ctx->pc = 0x125AFCu;
    // 0x125afc: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x125afcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x125b00: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_125b04:
    // 0x125b04: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x125b04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x125b08: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125B08u;
    {
        const bool branch_taken_0x125b08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125b08) {
            ctx->pc = 0x125B18u;
            goto label_125b18;
        }
    }
    ctx->pc = 0x125B10u;
    // 0x125b10: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x125b10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x125b14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x125b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_125b18:
    // 0x125b18: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125B18u;
    {
        const bool branch_taken_0x125b18 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x125B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B18u;
        // 0x125b1c: 0x3c0f4000  lui         $t7, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b18) {
            ctx->pc = 0x125B30u;
            goto label_125b30;
        }
    }
    ctx->pc = 0x125B20u;
    // 0x125b20: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x125b20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x125b24: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x125b24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x125b28: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x125B28u;
    {
        const bool branch_taken_0x125b28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B28u;
        // 0x125b2c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b28) {
            ctx->pc = 0x125B34u;
            goto label_125b34;
        }
    }
    ctx->pc = 0x125B30u;
label_125b30:
    // 0x125b30: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x125b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_125b34:
    // 0x125b34: 0x3e00008  jr          $ra
    ctx->pc = 0x125B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125B3Cu;
}
