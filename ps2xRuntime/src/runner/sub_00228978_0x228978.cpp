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

// Function: sub_00228978
// Address: 0x228978 - 0x228a94
void sub_00228978_0x228978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228978_0x228978");
#endif

    switch (ctx->pc) {
        case 0x228a44u: goto label_228a44;
        default: break;
    }

    ctx->pc = 0x228978u;

    // 0x228978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22897c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x22897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x228980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228984: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x228984u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228988: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x228988u;
    {
        const bool branch_taken_0x228988 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x22898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228988u;
        // 0x22898c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228988) {
            ctx->pc = 0x2289B0u;
            goto label_2289b0;
        }
    }
    ctx->pc = 0x228990u;
    // 0x228990: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x228990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x228994: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x228994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x228998: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228998u;
    {
        const bool branch_taken_0x228998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x228998) {
            ctx->pc = 0x22899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228998u;
            // 0x22899c: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2289B8u;
            goto label_2289b8;
        }
    }
    ctx->pc = 0x2289A0u;
    // 0x2289a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2289a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2289a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2289a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2289A8u;
    {
        const bool branch_taken_0x2289a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289A8u;
        // 0x2289ac: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289a8) {
            ctx->pc = 0x2289E8u;
            goto label_2289e8;
        }
    }
    ctx->pc = 0x2289B0u;
label_2289b0:
    // 0x2289b0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2289b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2289b4: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x2289b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2289b8:
    // 0x2289b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2289B8u;
    {
        const bool branch_taken_0x2289b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2289BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289B8u;
        // 0x2289bc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289b8) {
            ctx->pc = 0x2289E0u;
            goto label_2289e0;
        }
    }
    ctx->pc = 0x2289C0u;
    // 0x2289c0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2289c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2289c4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2289c8: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2289C8u;
    {
        const bool branch_taken_0x2289c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2289CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289C8u;
        // 0x2289cc: 0x24849700  addiu       $a0, $a0, -0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289c8) {
            ctx->pc = 0x228A3Cu;
            goto label_228a3c;
        }
    }
    ctx->pc = 0x2289D0u;
    // 0x2289d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2289d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2289d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2289d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2289d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2289D8u;
    {
        const bool branch_taken_0x2289d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289D8u;
        // 0x2289dc: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289d8) {
            ctx->pc = 0x2289E8u;
            goto label_2289e8;
        }
    }
    ctx->pc = 0x2289E0u;
label_2289e0:
    // 0x2289e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2289E0u;
    {
        const bool branch_taken_0x2289e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289E0u;
        // 0x2289e4: 0x24849700  addiu       $a0, $a0, -0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289e0) {
            ctx->pc = 0x228A3Cu;
            goto label_228a3c;
        }
    }
    ctx->pc = 0x2289E8u;
label_2289e8:
    // 0x2289e8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2289e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2289ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2289ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2289f0: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x2289f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x2289f4: 0x2c830003  sltiu       $v1, $a0, 0x3
    ctx->pc = 0x2289f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2289f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2289F8u;
    {
        const bool branch_taken_0x2289f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2289FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289F8u;
        // 0x2289fc: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289f8) {
            ctx->pc = 0x228A10u;
            goto label_228a10;
        }
    }
    ctx->pc = 0x228A00u;
    // 0x228a00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228a04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x228A04u;
    {
        const bool branch_taken_0x228a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A04u;
        // 0x228a08: 0x24849730  addiu       $a0, $a0, -0x68D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a04) {
            ctx->pc = 0x228A3Cu;
            goto label_228a3c;
        }
    }
    ctx->pc = 0x228A0Cu;
    // 0x228a0c: 0x0  nop
    ctx->pc = 0x228a0cu;
    // NOP
label_228a10:
    // 0x228a10: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x228a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x228a14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x228a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x228a18: 0x8c42aad8  lw          $v0, -0x5528($v0)
    ctx->pc = 0x228a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945496)));
    // 0x228a1c: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x228a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x228a20: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x228a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228a24: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x228a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x228a28: 0x2ca20026  sltiu       $v0, $a1, 0x26
    ctx->pc = 0x228a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x228a2c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x228A2Cu;
    {
        const bool branch_taken_0x228a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228a2c) {
            ctx->pc = 0x228A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228A2Cu;
            // 0x228a30: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228A50u;
            goto label_228a50;
        }
    }
    ctx->pc = 0x228A34u;
    // 0x228a34: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228a38: 0x24849760  addiu       $a0, $a0, -0x68A0
    ctx->pc = 0x228a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
label_228a3c:
    // 0x228a3c: 0xc08a0d4  jal         func_228350
    ctx->pc = 0x228A3Cu;
    SET_GPR_U32(ctx, 31, 0x228A44u);
    ctx->pc = 0x228350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228350u, 0x228A3Cu, 0x228A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A44u;
label_228a44:
    // 0x228a44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x228A44u;
    {
        const bool branch_taken_0x228a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A44u;
        // 0x228a48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a44) {
            ctx->pc = 0x228A88u;
            goto label_228a88;
        }
    }
    ctx->pc = 0x228A4Cu;
    // 0x228a4c: 0x0  nop
    ctx->pc = 0x228a4cu;
    // NOP
label_228a50:
    // 0x228a50: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x228a54: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x228a58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228a5c: 0x8c63aae8  lw          $v1, -0x5518($v1)
    ctx->pc = 0x228a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945512)));
    // 0x228a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a64: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x228a68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x228a6c: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x228a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x228a70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x228a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x228a74: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x228a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x228a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x228a7c: 0x8c63ab88  lw          $v1, -0x5478($v1)
    ctx->pc = 0x228a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945672)));
    // 0x228a80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x228a84: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x228a84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
label_228a88:
    // 0x228a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x228A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A8Cu;
        // 0x228a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228A94u;
}
