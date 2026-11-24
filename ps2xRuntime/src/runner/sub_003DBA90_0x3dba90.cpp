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

// Function: sub_003DBA90
// Address: 0x3dba90 - 0x3dbbb8
void sub_003DBA90_0x3dba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBA90_0x3dba90");
#endif

    switch (ctx->pc) {
        case 0x3dbabcu: goto label_3dbabc;
        case 0x3dbaccu: goto label_3dbacc;
        case 0x3dbb5cu: goto label_3dbb5c;
        default: break;
    }

    ctx->pc = 0x3dba90u;

    // 0x3dba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dba94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dba98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dba9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbaa0: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3dbaa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3dbaa4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DBAA4u;
    {
        const bool branch_taken_0x3dbaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAA4u;
        // 0x3dbaa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbaa4) {
            ctx->pc = 0x3DBB00u;
            goto label_3dbb00;
        }
    }
    ctx->pc = 0x3DBAACu;
    // 0x3dbaac: 0x860600c2  lh          $a2, 0xC2($s0)
    ctx->pc = 0x3dbaacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3dbab0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x3dbab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x3dbab4: 0xc0a2640  jal         func_289900
    ctx->pc = 0x3DBAB4u;
    SET_GPR_U32(ctx, 31, 0x3DBABCu);
    ctx->pc = 0x3DBAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBAB4u;
    // 0x3dbab8: 0x24a50cc0  addiu       $a1, $a1, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289900u, 0x3DBAB4u, 0x3DBABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBABCu;
label_3dbabc:
    // 0x3dbabc: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3dbabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3dbac0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3dbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3dbac4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DBAC4u;
    SET_GPR_U32(ctx, 31, 0x3DBACCu);
    ctx->pc = 0x3DBAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBAC4u;
    // 0x3dbac8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DBAC4u, 0x3DBACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBACCu;
label_3dbacc:
    // 0x3dbacc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DBACCu;
    {
        const bool branch_taken_0x3dbacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbacc) {
            ctx->pc = 0x3DBAF0u;
            goto label_3dbaf0;
        }
    }
    ctx->pc = 0x3DBAD4u;
    // 0x3dbad4: 0x944229de  lhu         $v0, 0x29DE($v0)
    ctx->pc = 0x3dbad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x3dbad8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3dbad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3dbadc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBADCu;
    {
        const bool branch_taken_0x3dbadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbadc) {
            ctx->pc = 0x3DBAF0u;
            goto label_3dbaf0;
        }
    }
    ctx->pc = 0x3DBAE4u;
    // 0x3dbae4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3DBAE4u;
    {
        const bool branch_taken_0x3dbae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAE4u;
        // 0x3dbae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbae4) {
            ctx->pc = 0x3DBBA8u;
            goto label_3dbba8;
        }
    }
    ctx->pc = 0x3DBAECu;
    // 0x3dbaec: 0x0  nop
    ctx->pc = 0x3dbaecu;
    // NOP
label_3dbaf0:
    // 0x3dbaf0: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x3dbaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
    // 0x3dbaf4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3DBAF4u;
    {
        const bool branch_taken_0x3dbaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAF4u;
        // 0x3dbaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbaf4) {
            ctx->pc = 0x3DBBA8u;
            goto label_3dbba8;
        }
    }
    ctx->pc = 0x3DBAFCu;
    // 0x3dbafc: 0x0  nop
    ctx->pc = 0x3dbafcu;
    // NOP
label_3dbb00:
    // 0x3dbb00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3dbb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3dbb04: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x3dbb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3dbb08: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3dbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3dbb0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3dbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dbb10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3dbb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3dbb14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3dbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3dbb18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dbb1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3dbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3dbb20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3dbb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dbb24: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DBB24u;
    {
        const bool branch_taken_0x3dbb24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB24u;
        // 0x3dbb28: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb24) {
            ctx->pc = 0x3DBB78u;
            goto label_3dbb78;
        }
    }
    ctx->pc = 0x3DBB2Cu;
    // 0x3dbb2c: 0x94a229de  lhu         $v0, 0x29DE($a1)
    ctx->pc = 0x3dbb2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10718)));
    // 0x3dbb30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3dbb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3dbb34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DBB34u;
    {
        const bool branch_taken_0x3dbb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb34) {
            ctx->pc = 0x3DBB78u;
            goto label_3dbb78;
        }
    }
    ctx->pc = 0x3DBB3Cu;
    // 0x3dbb3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DBB3Cu;
    {
        const bool branch_taken_0x3dbb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb3c) {
            ctx->pc = 0x3DBB68u;
            goto label_3dbb68;
        }
    }
    ctx->pc = 0x3DBB44u;
    // 0x3dbb44: 0x946229de  lhu         $v0, 0x29DE($v1)
    ctx->pc = 0x3dbb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10718)));
    // 0x3dbb48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3dbb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3dbb4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DBB4Cu;
    {
        const bool branch_taken_0x3dbb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb4c) {
            ctx->pc = 0x3DBB68u;
            goto label_3dbb68;
        }
    }
    ctx->pc = 0x3DBB54u;
    // 0x3dbb54: 0xc0f6e60  jal         func_3DB980
    ctx->pc = 0x3DBB54u;
    SET_GPR_U32(ctx, 31, 0x3DBB5Cu);
    ctx->pc = 0x3DB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB980u, 0x3DBB54u, 0x3DBB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBB5Cu;
label_3dbb5c:
    // 0x3dbb5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3DBB5Cu;
    {
        const bool branch_taken_0x3dbb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb5c) {
            ctx->pc = 0x3DBBA8u;
            goto label_3dbba8;
        }
    }
    ctx->pc = 0x3DBB64u;
    // 0x3dbb64: 0x0  nop
    ctx->pc = 0x3dbb64u;
    // NOP
label_3dbb68:
    // 0x3dbb68: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dbb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dbb70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3DBB70u;
    {
        const bool branch_taken_0x3dbb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB70u;
        // 0x3dbb74: 0xae0307c0  sw          $v1, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb70) {
            ctx->pc = 0x3DBBA8u;
            goto label_3dbba8;
        }
    }
    ctx->pc = 0x3DBB78u;
label_3dbb78:
    // 0x3dbb78: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DBB78u;
    {
        const bool branch_taken_0x3dbb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb78) {
            ctx->pc = 0x3DBBA0u;
            goto label_3dbba0;
        }
    }
    ctx->pc = 0x3DBB80u;
    // 0x3dbb80: 0x946229de  lhu         $v0, 0x29DE($v1)
    ctx->pc = 0x3dbb80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10718)));
    // 0x3dbb84: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3dbb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3dbb88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DBB88u;
    {
        const bool branch_taken_0x3dbb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb88) {
            ctx->pc = 0x3DBBA0u;
            goto label_3dbba0;
        }
    }
    ctx->pc = 0x3DBB90u;
    // 0x3dbb90: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3dbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3dbb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dbb98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBB98u;
    {
        const bool branch_taken_0x3dbb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB98u;
        // 0x3dbb9c: 0xae0307c0  sw          $v1, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb98) {
            ctx->pc = 0x3DBBA8u;
            goto label_3dbba8;
        }
    }
    ctx->pc = 0x3DBBA0u;
label_3dbba0:
    // 0x3dbba0: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x3dbba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
    // 0x3dbba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dbba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbba8:
    // 0x3dbba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dbba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBB0u;
        // 0x3dbbb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBBB8u;
}
