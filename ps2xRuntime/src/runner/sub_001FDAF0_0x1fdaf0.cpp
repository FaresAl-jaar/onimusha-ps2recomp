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

// Function: sub_001FDAF0
// Address: 0x1fdaf0 - 0x1fdbf8
void sub_001FDAF0_0x1fdaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDAF0_0x1fdaf0");
#endif

    switch (ctx->pc) {
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdbb0u: goto label_1fdbb0;
        default: break;
    }

    ctx->pc = 0x1fdaf0u;

    // 0x1fdaf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fdaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fdaf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fdaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdaf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fdaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fdafc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fdafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fdb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fdb04: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1fdb08: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1fdb08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fdb0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fdb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fdb10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fdb14: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fdb14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fdb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fdb1c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fdb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fdb20: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fdb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fdb24: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FDB24u;
    {
        const bool branch_taken_0x1fdb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB24u;
        // 0x1fdb28: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb24) {
            ctx->pc = 0x1FDBCCu;
            goto label_1fdbcc;
        }
    }
    ctx->pc = 0x1FDB2Cu;
    // 0x1fdb2c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdb30: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1fdb30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fdb34: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1fdb34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdb38: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1fdb38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fdb3c: 0x0  nop
    ctx->pc = 0x1fdb3cu;
    // NOP
label_1fdb40:
    // 0x1fdb40: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDB40u;
    {
        const bool branch_taken_0x1fdb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB40u;
        // 0x1fdb44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb40) {
            ctx->pc = 0x1FDB78u;
            goto label_1fdb78;
        }
    }
    ctx->pc = 0x1FDB48u;
    // 0x1fdb48: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDB48u;
    {
        const bool branch_taken_0x1fdb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb48) {
            ctx->pc = 0x1FDB68u;
            goto label_1fdb68;
        }
    }
    ctx->pc = 0x1FDB50u;
    // 0x1fdb50: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDB50u;
    {
        const bool branch_taken_0x1fdb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1fdb50) {
            ctx->pc = 0x1FDB88u;
            goto label_1fdb88;
        }
    }
    ctx->pc = 0x1FDB58u;
    // 0x1fdb58: 0x50760013  beql        $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FDB58u;
    {
        const bool branch_taken_0x1fdb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x1fdb58) {
            ctx->pc = 0x1FDB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB58u;
            // 0x1fdb5c: 0x2630fffc  addiu       $s0, $s1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBA8u;
            goto label_1fdba8;
        }
    }
    ctx->pc = 0x1FDB60u;
    // 0x1fdb60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FDB60u;
    {
        const bool branch_taken_0x1fdb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB60u;
        // 0x1fdb64: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb60) {
            ctx->pc = 0x1FDBC4u;
            goto label_1fdbc4;
        }
    }
    ctx->pc = 0x1FDB68u;
label_1fdb68:
    // 0x1fdb68: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FDB68u;
    {
        const bool branch_taken_0x1fdb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb68) {
            ctx->pc = 0x1FDB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB68u;
            // 0x1fdb6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDBC0u;
            goto label_1fdbc0;
        }
    }
    ctx->pc = 0x1FDB70u;
    // 0x1fdb70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FDB70u;
    {
        const bool branch_taken_0x1fdb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB70u;
        // 0x1fdb74: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb70) {
            ctx->pc = 0x1FDBC4u;
            goto label_1fdbc4;
        }
    }
    ctx->pc = 0x1FDB78u;
label_1fdb78:
    // 0x1fdb78: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1fdb78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FDB7Cu;
    {
        const bool branch_taken_0x1fdb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB7Cu;
        // 0x1fdb80: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb7c) {
            ctx->pc = 0x1FDBC0u;
            goto label_1fdbc0;
        }
    }
    ctx->pc = 0x1FDB84u;
    // 0x1fdb84: 0x0  nop
    ctx->pc = 0x1fdb84u;
    // NOP
label_1fdb88:
    // 0x1fdb88: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDB88u;
    {
        const bool branch_taken_0x1fdb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1fdb88) {
            ctx->pc = 0x1FDB98u;
            goto label_1fdb98;
        }
    }
    ctx->pc = 0x1FDB90u;
    // 0x1fdb90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FDB90u;
    {
        const bool branch_taken_0x1fdb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB90u;
        // 0x1fdb94: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb90) {
            ctx->pc = 0x1FDBC0u;
            goto label_1fdbc0;
        }
    }
    ctx->pc = 0x1FDB98u;
label_1fdb98:
    // 0x1fdb98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDB98u;
    {
        const bool branch_taken_0x1fdb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB98u;
        // 0x1fdb9c: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb98) {
            ctx->pc = 0x1FDBC4u;
            goto label_1fdbc4;
        }
    }
    ctx->pc = 0x1FDBA0u;
    // 0x1fdba0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDBA0u;
    {
        const bool branch_taken_0x1fdba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBA0u;
        // 0x1fdba4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdba0) {
            ctx->pc = 0x1FDBC4u;
            goto label_1fdbc4;
        }
    }
    ctx->pc = 0x1FDBA8u;
label_1fdba8:
    // 0x1fdba8: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x1FDBA8u;
    SET_GPR_U32(ctx, 31, 0x1FDBB0u);
    ctx->pc = 0x1FDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBA8u;
    // 0x1fdbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1FDBA8u, 0x1FDBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBB0u;
label_1fdbb0:
    // 0x1fdbb0: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x1fdbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1fdbb4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDBB4u;
    {
        const bool branch_taken_0x1fdbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBB4u;
        // 0x1fdbb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbb4) {
            ctx->pc = 0x1FDBD0u;
            goto label_1fdbd0;
        }
    }
    ctx->pc = 0x1FDBBCu;
    // 0x1fdbbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fdbbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdbc0:
    // 0x1fdbc0: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1fdbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1fdbc4:
    // 0x1fdbc4: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1FDBC4u;
    {
        const bool branch_taken_0x1fdbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbc4) {
            ctx->pc = 0x1FDBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDBC4u;
            // 0x1fdbc8: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdb40;
        }
    }
    ctx->pc = 0x1FDBCCu;
label_1fdbcc:
    // 0x1fdbcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fdbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdbd0:
    // 0x1fdbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdbd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fdbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdbd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fdbd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdbdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fdbdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fdbe0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fdbe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdbe4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fdbe4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fdbe8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fdbe8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdbec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fdbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fdbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF0u;
        // 0x1fdbf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDBF8u;
}
