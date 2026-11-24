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

// Function: sub_002C3CA0
// Address: 0x2c3ca0 - 0x2c3f48
void sub_002C3CA0_0x2c3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3CA0_0x2c3ca0");
#endif

    switch (ctx->pc) {
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3efcu: goto label_2c3efc;
        default: break;
    }

    ctx->pc = 0x2c3ca0u;

    // 0x2c3ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3ca4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c3ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c3ca8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c3ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3cb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c3cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3cb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c3cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3cc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c3cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3cc8: 0x80d00001  lb          $s0, 0x1($a2)
    ctx->pc = 0x2c3cc8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c3ccc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3CCCu;
    {
        const bool branch_taken_0x2c3ccc = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2C3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CCCu;
        // 0x2c3cd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ccc) {
            ctx->pc = 0x2C3CDCu;
            goto label_2c3cdc;
        }
    }
    ctx->pc = 0x2C3CD4u;
    // 0x2c3cd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3CD4u;
    {
        const bool branch_taken_0x2c3cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CD4u;
        // 0x2c3cd8: 0x101823  negu        $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cd4) {
            ctx->pc = 0x2C3CE0u;
            goto label_2c3ce0;
        }
    }
    ctx->pc = 0x2C3CDCu;
label_2c3cdc:
    // 0x2c3cdc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2c3cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3ce0:
    // 0x2c3ce0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3ce4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C3CE4u;
    {
        const bool branch_taken_0x2c3ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CE4u;
        // 0x2c3ce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ce4) {
            ctx->pc = 0x2C3D90u;
            goto label_2c3d90;
        }
    }
    ctx->pc = 0x2C3CECu;
    // 0x2c3cec: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C3CECu;
    {
        const bool branch_taken_0x2c3cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3cec) {
            ctx->pc = 0x2C3D58u;
            goto label_2c3d58;
        }
    }
    ctx->pc = 0x2C3CF4u;
    // 0x2c3cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3cf8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C3CF8u;
    {
        const bool branch_taken_0x2c3cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CF8u;
        // 0x2c3cfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cf8) {
            ctx->pc = 0x2C3D30u;
            goto label_2c3d30;
        }
    }
    ctx->pc = 0x2C3D00u;
    // 0x2c3d00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3D00u;
    {
        const bool branch_taken_0x2c3d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3d00) {
            ctx->pc = 0x2C3D10u;
            goto label_2c3d10;
        }
    }
    ctx->pc = 0x2C3D08u;
    // 0x2c3d08: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2C3D08u;
    {
        const bool branch_taken_0x2c3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d08) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D10u;
label_2c3d10:
    // 0x2c3d10: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c3d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c3d14: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C3D14u;
    SET_GPR_U32(ctx, 31, 0x2C3D1Cu);
    ctx->pc = 0x2C3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D14u;
    // 0x2c3d18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C3D14u, 0x2C3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D1Cu;
label_2c3d1c:
    // 0x2c3d1c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C3D1Cu;
    {
        const bool branch_taken_0x2c3d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d1c) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D24u;
    // 0x2c3d24: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2C3D24u;
    {
        const bool branch_taken_0x2c3d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D24u;
        // 0x2c3d28: 0x905107b2  lbu         $s1, 0x7B2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1970)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d24) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D2Cu;
    // 0x2c3d2c: 0x0  nop
    ctx->pc = 0x2c3d2cu;
    // NOP
label_2c3d30:
    // 0x2c3d30: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c3d34: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c3d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3d38: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c3d3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3d44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3d48: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2C3D48u;
    {
        const bool branch_taken_0x2c3d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d48) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D50u;
    // 0x2c3d50: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C3D50u;
    {
        const bool branch_taken_0x2c3d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D50u;
        // 0x2c3d54: 0x905107b2  lbu         $s1, 0x7B2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1970)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d50) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D58u;
label_2c3d58:
    // 0x2c3d58: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c3d5c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2c3d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3d60: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2c3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c3d64: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2c3d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2c3d68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3d6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3d74: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3D74u;
    {
        const bool branch_taken_0x2c3d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D74u;
        // 0x2c3d78: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d74) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D7Cu;
    // 0x2c3d7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3d80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3d84: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3D84u;
    {
        const bool branch_taken_0x2c3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D84u;
        // 0x2c3d88: 0x905107b2  lbu         $s1, 0x7B2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1970)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d84) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3D8Cu;
    // 0x2c3d8c: 0x0  nop
    ctx->pc = 0x2c3d8cu;
    // NOP
label_2c3d90:
    // 0x2c3d90: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c3d94: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2c3d94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3d98: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c3d9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c3da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3da4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3da8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3DA8u;
    {
        const bool branch_taken_0x2c3da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3da8) {
            ctx->pc = 0x2C3DB8u;
            goto label_2c3db8;
        }
    }
    ctx->pc = 0x2C3DB0u;
    // 0x2c3db0: 0x909107b2  lbu         $s1, 0x7B2($a0)
    ctx->pc = 0x2c3db0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1970)));
    // 0x2c3db4: 0x0  nop
    ctx->pc = 0x2c3db4u;
    // NOP
label_2c3db8:
    // 0x2c3db8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c3dbc: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2c3dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c3dc0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c3dc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3dcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3dd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C3DD0u;
    {
        const bool branch_taken_0x2c3dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3dd0) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3DD8u;
    // 0x2c3dd8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3DD8u;
    {
        const bool branch_taken_0x2c3dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DD8u;
        // 0x2c3ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dd8) {
            ctx->pc = 0x2C3DE4u;
            goto label_2c3de4;
        }
    }
    ctx->pc = 0x2C3DE0u;
    // 0x2c3de0: 0x908207b2  lbu         $v0, 0x7B2($a0)
    ctx->pc = 0x2c3de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1970)));
label_2c3de4:
    // 0x2c3de4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2c3de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c3de8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3DE8u;
    {
        const bool branch_taken_0x2c3de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3de8) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3DF0u;
    // 0x2c3df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3DF0u;
    {
        const bool branch_taken_0x2c3df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3df0) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3DF8u;
label_2c3df8:
    // 0x2c3df8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3DF8u;
    {
        const bool branch_taken_0x2c3df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF8u;
        // 0x2c3dfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3df8) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3E00u;
    // 0x2c3e00: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3E00u;
    {
        const bool branch_taken_0x2c3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E00u;
        // 0x2c3e04: 0x909107b2  lbu         $s1, 0x7B2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1970)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e00) {
            ctx->pc = 0x2C3E08u;
            goto label_2c3e08;
        }
    }
    ctx->pc = 0x2C3E08u;
label_2c3e08:
    // 0x2c3e08: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E08u;
    {
        const bool branch_taken_0x2c3e08 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2C3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E08u;
        // 0x2c3e0c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e08) {
            ctx->pc = 0x2C3E1Cu;
            goto label_2c3e1c;
        }
    }
    ctx->pc = 0x2C3E10u;
    // 0x2c3e10: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2c3e10u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3e14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3E14u;
    {
        const bool branch_taken_0x2c3e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E14u;
        // 0x2c3e18: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e14) {
            ctx->pc = 0x2C3E34u;
            goto label_2c3e34;
        }
    }
    ctx->pc = 0x2C3E1Cu;
label_2c3e1c:
    // 0x2c3e1c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2c3e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2c3e20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c3e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c3e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3e28: 0x0  nop
    ctx->pc = 0x2c3e28u;
    // NOP
    // 0x2c3e2c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c3e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c3e30: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c3e30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c3e34:
    // 0x2c3e34: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3e38: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c3e3c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c3e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c3e40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c3e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3e4c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c3e4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c3e50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c3e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c3e54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c3e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3e58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3E58u;
    {
        const bool branch_taken_0x2c3e58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3e58) {
            ctx->pc = 0x2C3E70u;
            goto label_2c3e70;
        }
    }
    ctx->pc = 0x2C3E60u;
    // 0x2c3e60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c3e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c3e64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c3e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c3e68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3E68u;
    {
        const bool branch_taken_0x2c3e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E68u;
        // 0x2c3e6c: 0x92420002  lbu         $v0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e68) {
            ctx->pc = 0x2C3E8Cu;
            goto label_2c3e8c;
        }
    }
    ctx->pc = 0x2C3E70u;
label_2c3e70:
    // 0x2c3e70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c3e70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c3e78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c3e78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c3e7c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c3e7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c3e80: 0x0  nop
    ctx->pc = 0x2c3e80u;
    // NOP
    // 0x2c3e84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c3e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c3e88: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2c3e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2c3e8c:
    // 0x2c3e8c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E8Cu;
    {
        const bool branch_taken_0x2c3e8c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2C3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E8Cu;
        // 0x2c3e90: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e8c) {
            ctx->pc = 0x2C3EA0u;
            goto label_2c3ea0;
        }
    }
    ctx->pc = 0x2C3E94u;
    // 0x2c3e94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c3e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c3e98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c3e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3ea0:
    // 0x2c3ea0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C3EA0u;
    {
        const bool branch_taken_0x2c3ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ea0) {
            ctx->pc = 0x2C3F20u;
            goto label_2c3f20;
        }
    }
    ctx->pc = 0x2C3EA8u;
    // 0x2c3ea8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3eac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3EACu;
    {
        const bool branch_taken_0x2c3eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EACu;
        // 0x2c3eb0: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3eac) {
            ctx->pc = 0x2C3F08u;
            goto label_2c3f08;
        }
    }
    ctx->pc = 0x2C3EB4u;
    // 0x2c3eb4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3EB4u;
    {
        const bool branch_taken_0x2c3eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EB4u;
        // 0x2c3eb8: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3eb4) {
            ctx->pc = 0x2C3EF0u;
            goto label_2c3ef0;
        }
    }
    ctx->pc = 0x2C3EBCu;
    // 0x2c3ebc: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c3ebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c3ec0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c3ec4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3ecc: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c3eccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3ed0: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c3ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3ed4: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c3ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3ed8: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c3ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3edc: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c3edcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3ee0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c3ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3ee8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3EE8u;
    {
        const bool branch_taken_0x2c3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EE8u;
        // 0x2c3eec: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ee8) {
            ctx->pc = 0x2C3F18u;
            goto label_2c3f18;
        }
    }
    ctx->pc = 0x2C3EF0u;
label_2c3ef0:
    // 0x2c3ef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ef4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C3EF4u;
    SET_GPR_U32(ctx, 31, 0x2C3EFCu);
    ctx->pc = 0x2C3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EF4u;
    // 0x2c3ef8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C3EF4u, 0x2C3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EFCu;
label_2c3efc:
    // 0x2c3efc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3EFCu;
    {
        const bool branch_taken_0x2c3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3efc) {
            ctx->pc = 0x2C3F10u;
            goto label_2c3f10;
        }
    }
    ctx->pc = 0x2C3F04u;
    // 0x2c3f04: 0x0  nop
    ctx->pc = 0x2c3f04u;
    // NOP
label_2c3f08:
    // 0x2c3f08: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c3f08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3f0c: 0x0  nop
    ctx->pc = 0x2c3f0cu;
    // NOP
label_2c3f10:
    // 0x2c3f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f14: 0x0  nop
    ctx->pc = 0x2c3f14u;
    // NOP
label_2c3f18:
    // 0x2c3f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3F18u;
    {
        const bool branch_taken_0x2c3f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f18) {
            ctx->pc = 0x2C3F28u;
            goto label_2c3f28;
        }
    }
    ctx->pc = 0x2C3F20u;
label_2c3f20:
    // 0x2c3f20: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c3f24: 0x0  nop
    ctx->pc = 0x2c3f24u;
    // NOP
label_2c3f28:
    // 0x2c3f28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c3f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3f2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c3f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F40u;
        // 0x2c3f44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3F48u;
}
