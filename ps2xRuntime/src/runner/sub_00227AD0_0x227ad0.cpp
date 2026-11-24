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

// Function: sub_00227AD0
// Address: 0x227ad0 - 0x227b4c
void sub_00227AD0_0x227ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227AD0_0x227ad0");
#endif

    switch (ctx->pc) {
        case 0x227b08u: goto label_227b08;
        default: break;
    }

    ctx->pc = 0x227ad0u;

    // 0x227ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227ae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ae4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227AE4u;
    {
        const bool branch_taken_0x227ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AE4u;
        // 0x227ae8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ae4) {
            ctx->pc = 0x227AF4u;
            goto label_227af4;
        }
    }
    ctx->pc = 0x227AECu;
    // 0x227aec: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227AECu;
    {
        const bool branch_taken_0x227aec = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x227aec) {
            ctx->pc = 0x227B00u;
            goto label_227b00;
        }
    }
    ctx->pc = 0x227AF4u;
label_227af4:
    // 0x227af4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x227AF4u;
    {
        const bool branch_taken_0x227af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AF4u;
        // 0x227af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227af4) {
            ctx->pc = 0x227B38u;
            goto label_227b38;
        }
    }
    ctx->pc = 0x227AFCu;
    // 0x227afc: 0x0  nop
    ctx->pc = 0x227afcu;
    // NOP
label_227b00:
    // 0x227b00: 0xc089e2c  jal         func_2278B0
    ctx->pc = 0x227B00u;
    SET_GPR_U32(ctx, 31, 0x227B08u);
    ctx->pc = 0x2278B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278B0u, 0x227B00u, 0x227B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B08u;
label_227b08:
    // 0x227b08: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x227b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x227b0c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x227b0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x227b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x227B18u;
    {
        const bool branch_taken_0x227b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B18u;
        // 0x227b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b18) {
            ctx->pc = 0x227B38u;
            goto label_227b38;
        }
    }
    ctx->pc = 0x227B20u;
    // 0x227b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b2c: 0x8089f34  j           func_227CD0
    ctx->pc = 0x227B2Cu;
    ctx->pc = 0x227B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B2Cu;
    // 0x227b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227CD0u;
    sub_00227CD0_0x227cd0(rdram, ctx, runtime); return;
    ctx->pc = 0x227B34u;
    // 0x227b34: 0x0  nop
    ctx->pc = 0x227b34u;
    // NOP
label_227b38:
    // 0x227b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227b44: 0x3e00008  jr          $ra
    ctx->pc = 0x227B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B44u;
        // 0x227b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B4Cu;
}
