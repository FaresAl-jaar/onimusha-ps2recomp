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

// Function: sub_00250AD8
// Address: 0x250ad8 - 0x250b54
void sub_00250AD8_0x250ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250AD8_0x250ad8");
#endif

    switch (ctx->pc) {
        case 0x250b00u: goto label_250b00;
        default: break;
    }

    ctx->pc = 0x250ad8u;

    // 0x250ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250adc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250ADCu;
    {
        const bool branch_taken_0x250adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ADCu;
        // 0x250ae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250adc) {
            ctx->pc = 0x250B00u;
            goto label_250b00;
        }
    }
    ctx->pc = 0x250AE4u;
    // 0x250ae4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250ae8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250af0: 0x2484eb78  addiu       $a0, $a0, -0x1488
    ctx->pc = 0x250af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962040));
    // 0x250af4: 0x24a5eb28  addiu       $a1, $a1, -0x14D8
    ctx->pc = 0x250af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
    // 0x250af8: 0x80941da  j           func_250768
    ctx->pc = 0x250AF8u;
    ctx->pc = 0x250AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AF8u;
    // 0x250afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250B00u;
label_250b00:
    // 0x250b00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x250b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250b04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x250B04u;
    {
        const bool branch_taken_0x250b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250b04) {
            ctx->pc = 0x250B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250B04u;
            // 0x250b08: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250B28u;
            goto label_250b28;
        }
    }
    ctx->pc = 0x250B0Cu;
    // 0x250b0c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250b10: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b18: 0x2484eb88  addiu       $a0, $a0, -0x1478
    ctx->pc = 0x250b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962056));
    // 0x250b1c: 0x24a5eb58  addiu       $a1, $a1, -0x14A8
    ctx->pc = 0x250b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
    // 0x250b20: 0x80941da  j           func_250768
    ctx->pc = 0x250B20u;
    ctx->pc = 0x250B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B20u;
    // 0x250b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250B28u;
label_250b28:
    // 0x250b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b2c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x250b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x250b30: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x250b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x250b34: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x250b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x250b38: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x250b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x250b3c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x250b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x250b40: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x250b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x250b44: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x250b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x250b48: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x250b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x250b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x250B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B4Cu;
        // 0x250b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B54u;
}
