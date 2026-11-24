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

// Function: sub_001FD9F0
// Address: 0x1fd9f0 - 0x1fdaf0
void sub_001FD9F0_0x1fd9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD9F0_0x1fd9f0");
#endif

    switch (ctx->pc) {
        case 0x1fda30u: goto label_1fda30;
        case 0x1fdaa0u: goto label_1fdaa0;
        default: break;
    }

    ctx->pc = 0x1fd9f0u;

    // 0x1fd9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd9f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fd9f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fda00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fda04: 0x2058823  subu        $s1, $s0, $a1
    ctx->pc = 0x1fda04u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1fda08: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1fda08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fda0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fda0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fda10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fda10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fda14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fda14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fda18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fda1c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FDA1Cu;
    {
        const bool branch_taken_0x1fda1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA1Cu;
        // 0x1fda20: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda1c) {
            ctx->pc = 0x1FDACCu;
            goto label_1fdacc;
        }
    }
    ctx->pc = 0x1FDA24u;
    // 0x1fda24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fda24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda28: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1fda28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fda2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fda2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fda30:
    // 0x1fda30: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FDA30u;
    {
        const bool branch_taken_0x1fda30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1FDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA30u;
        // 0x1fda34: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda30) {
            ctx->pc = 0x1FDA60u;
            goto label_1fda60;
        }
    }
    ctx->pc = 0x1FDA38u;
    // 0x1fda38: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FDA38u;
    {
        const bool branch_taken_0x1fda38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda38) {
            ctx->pc = 0x1FDA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA38u;
            // 0x1fda3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDA40u;
    // 0x1fda40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fda44: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDA44u;
    {
        const bool branch_taken_0x1fda44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fda44) {
            ctx->pc = 0x1FDA70u;
            goto label_1fda70;
        }
    }
    ctx->pc = 0x1FDA4Cu;
    // 0x1fda4c: 0x10740010  beq         $v1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FDA4Cu;
    {
        const bool branch_taken_0x1fda4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x1fda4c) {
            ctx->pc = 0x1FDA90u;
            goto label_1fda90;
        }
    }
    ctx->pc = 0x1FDA54u;
    // 0x1fda54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FDA54u;
    {
        const bool branch_taken_0x1fda54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA54u;
        // 0x1fda58: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda54) {
            ctx->pc = 0x1FDAC4u;
            goto label_1fdac4;
        }
    }
    ctx->pc = 0x1FDA5Cu;
    // 0x1fda5c: 0x0  nop
    ctx->pc = 0x1fda5cu;
    // NOP
label_1fda60:
    // 0x1fda60: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FDA60u;
    {
        const bool branch_taken_0x1fda60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fda60) {
            ctx->pc = 0x1FDA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA60u;
            // 0x1fda64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDA68u;
    // 0x1fda68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FDA68u;
    {
        const bool branch_taken_0x1fda68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA68u;
        // 0x1fda6c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda68) {
            ctx->pc = 0x1FDAC4u;
            goto label_1fdac4;
        }
    }
    ctx->pc = 0x1FDA70u;
label_1fda70:
    // 0x1fda70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDA70u;
    {
        const bool branch_taken_0x1fda70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fda70) {
            ctx->pc = 0x1FDA80u;
            goto label_1fda80;
        }
    }
    ctx->pc = 0x1FDA78u;
    // 0x1fda78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDA78u;
    {
        const bool branch_taken_0x1fda78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA78u;
        // 0x1fda7c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda78) {
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDA80u;
label_1fda80:
    // 0x1fda80: 0x10520010  beq         $v0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FDA80u;
    {
        const bool branch_taken_0x1fda80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1FDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA80u;
        // 0x1fda84: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda80) {
            ctx->pc = 0x1FDAC4u;
            goto label_1fdac4;
        }
    }
    ctx->pc = 0x1FDA88u;
    // 0x1fda88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FDA88u;
    {
        const bool branch_taken_0x1fda88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA88u;
        // 0x1fda8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda88) {
            ctx->pc = 0x1FDAC4u;
            goto label_1fdac4;
        }
    }
    ctx->pc = 0x1FDA90u;
label_1fda90:
    // 0x1fda90: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDA90u;
    {
        const bool branch_taken_0x1fda90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fda90) {
            ctx->pc = 0x1FDA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDA90u;
            // 0x1fda94: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAB8u;
            goto label_1fdab8;
        }
    }
    ctx->pc = 0x1FDA98u;
    // 0x1fda98: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x1FDA98u;
    SET_GPR_U32(ctx, 31, 0x1FDAA0u);
    ctx->pc = 0x1FDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA98u;
    // 0x1fda9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1FDA98u, 0x1FDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAA0u;
label_1fdaa0:
    // 0x1fdaa0: 0x2621824  and         $v1, $s3, $v0
    ctx->pc = 0x1fdaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1fdaa4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDAA4u;
    {
        const bool branch_taken_0x1fdaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAA4u;
        // 0x1fdaa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaa4) {
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDAACu;
    // 0x1fdaac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDAACu;
    {
        const bool branch_taken_0x1fdaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAACu;
        // 0x1fdab0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaac) {
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDAB4u;
    // 0x1fdab4: 0x0  nop
    ctx->pc = 0x1fdab4u;
    // NOP
label_1fdab8:
    // 0x1fdab8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1fdab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdabc: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1fdabcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1fdac0:
    // 0x1fdac0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1fdac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1fdac4:
    // 0x1fdac4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1FDAC4u;
    {
        const bool branch_taken_0x1fdac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAC4u;
        // 0x1fdac8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdac4) {
            ctx->pc = 0x1FDA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fda30;
        }
    }
    ctx->pc = 0x1FDACCu;
label_1fdacc:
    // 0x1fdacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fdaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdad0:
    // 0x1fdad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fdad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdad8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fdad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdadc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fdadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fdae0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fdae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdae4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fdae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fdae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAE8u;
        // 0x1fdaec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDAF0u;
}
