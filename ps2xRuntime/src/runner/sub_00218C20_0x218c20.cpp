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

// Function: sub_00218C20
// Address: 0x218c20 - 0x218d94
void sub_00218C20_0x218c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218C20_0x218c20");
#endif

    switch (ctx->pc) {
        case 0x218c20u: goto label_218c20;
        case 0x218c24u: goto label_218c24;
        case 0x218c28u: goto label_218c28;
        case 0x218c2cu: goto label_218c2c;
        case 0x218c30u: goto label_218c30;
        case 0x218c34u: goto label_218c34;
        case 0x218c38u: goto label_218c38;
        case 0x218c3cu: goto label_218c3c;
        case 0x218c40u: goto label_218c40;
        case 0x218c44u: goto label_218c44;
        case 0x218c48u: goto label_218c48;
        case 0x218c4cu: goto label_218c4c;
        case 0x218c50u: goto label_218c50;
        case 0x218c54u: goto label_218c54;
        case 0x218c58u: goto label_218c58;
        case 0x218c5cu: goto label_218c5c;
        case 0x218c60u: goto label_218c60;
        case 0x218c64u: goto label_218c64;
        case 0x218c68u: goto label_218c68;
        case 0x218c6cu: goto label_218c6c;
        case 0x218c70u: goto label_218c70;
        case 0x218c74u: goto label_218c74;
        case 0x218c78u: goto label_218c78;
        case 0x218c7cu: goto label_218c7c;
        case 0x218c80u: goto label_218c80;
        case 0x218c84u: goto label_218c84;
        case 0x218c88u: goto label_218c88;
        case 0x218c8cu: goto label_218c8c;
        case 0x218c90u: goto label_218c90;
        case 0x218c94u: goto label_218c94;
        case 0x218c98u: goto label_218c98;
        case 0x218c9cu: goto label_218c9c;
        case 0x218ca0u: goto label_218ca0;
        case 0x218ca4u: goto label_218ca4;
        case 0x218ca8u: goto label_218ca8;
        case 0x218cacu: goto label_218cac;
        case 0x218cb0u: goto label_218cb0;
        case 0x218cb4u: goto label_218cb4;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cbcu: goto label_218cbc;
        case 0x218cc0u: goto label_218cc0;
        case 0x218cc4u: goto label_218cc4;
        case 0x218cc8u: goto label_218cc8;
        case 0x218cccu: goto label_218ccc;
        case 0x218cd0u: goto label_218cd0;
        case 0x218cd4u: goto label_218cd4;
        case 0x218cd8u: goto label_218cd8;
        case 0x218cdcu: goto label_218cdc;
        case 0x218ce0u: goto label_218ce0;
        case 0x218ce4u: goto label_218ce4;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cecu: goto label_218cec;
        case 0x218cf0u: goto label_218cf0;
        case 0x218cf4u: goto label_218cf4;
        case 0x218cf8u: goto label_218cf8;
        case 0x218cfcu: goto label_218cfc;
        case 0x218d00u: goto label_218d00;
        case 0x218d04u: goto label_218d04;
        case 0x218d08u: goto label_218d08;
        case 0x218d0cu: goto label_218d0c;
        case 0x218d10u: goto label_218d10;
        case 0x218d14u: goto label_218d14;
        case 0x218d18u: goto label_218d18;
        case 0x218d1cu: goto label_218d1c;
        case 0x218d20u: goto label_218d20;
        case 0x218d24u: goto label_218d24;
        case 0x218d28u: goto label_218d28;
        case 0x218d2cu: goto label_218d2c;
        case 0x218d30u: goto label_218d30;
        case 0x218d34u: goto label_218d34;
        case 0x218d38u: goto label_218d38;
        case 0x218d3cu: goto label_218d3c;
        case 0x218d40u: goto label_218d40;
        case 0x218d44u: goto label_218d44;
        case 0x218d48u: goto label_218d48;
        case 0x218d4cu: goto label_218d4c;
        case 0x218d50u: goto label_218d50;
        case 0x218d54u: goto label_218d54;
        case 0x218d58u: goto label_218d58;
        case 0x218d5cu: goto label_218d5c;
        case 0x218d60u: goto label_218d60;
        case 0x218d64u: goto label_218d64;
        case 0x218d68u: goto label_218d68;
        case 0x218d6cu: goto label_218d6c;
        case 0x218d70u: goto label_218d70;
        case 0x218d74u: goto label_218d74;
        case 0x218d78u: goto label_218d78;
        case 0x218d7cu: goto label_218d7c;
        case 0x218d80u: goto label_218d80;
        case 0x218d84u: goto label_218d84;
        case 0x218d88u: goto label_218d88;
        case 0x218d8cu: goto label_218d8c;
        case 0x218d90u: goto label_218d90;
        default: break;
    }

    ctx->pc = 0x218c20u;

label_218c20:
    // 0x218c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x218c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_218c24:
    // 0x218c24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x218c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_218c28:
    // 0x218c28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x218c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_218c2c:
    // 0x218c2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x218c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218c30:
    // 0x218c30: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x218c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_218c34:
    // 0x218c34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x218c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218c38:
    // 0x218c38: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x218c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_218c3c:
    // 0x218c3c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x218c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_218c40:
    // 0x218c40: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x218c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_218c44:
    // 0x218c44: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x218c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_218c48:
    // 0x218c48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x218c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_218c4c:
    // 0x218c4c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x218c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_218c50:
    // 0x218c50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x218c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_218c54:
    // 0x218c54: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x218c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_218c58:
    // 0x218c58: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x218c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_218c5c:
    // 0x218c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218c60:
    // 0x218c60: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218c64:
    // 0x218c64: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x218c64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_218c68:
    // 0x218c68: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x218c68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_218c6c:
    // 0x218c6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x218c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_218c70:
    // 0x218c70: 0x40f809  jalr        $v0
label_218c74:
    if (ctx->pc == 0x218C74u) {
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C78u;
        goto label_218c78;
    }
    ctx->pc = 0x218C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218C78u);
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C70u, 0x218C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218C78u;
label_218c78:
    // 0x218c78: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x218c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_218c7c:
    // 0x218c7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x218c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_218c80:
    // 0x218c80: 0xc07f6bc  jal         func_1FDAF0
label_218c84:
    if (ctx->pc == 0x218C84u) {
        ctx->pc = 0x218C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C80u;
        // 0x218c84: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C88u;
        goto label_218c88;
    }
    ctx->pc = 0x218C80u;
    SET_GPR_U32(ctx, 31, 0x218C88u);
    ctx->pc = 0x218C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C80u;
    // 0x218c84: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x218C80u, 0x218C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C88u;
label_218c88:
    // 0x218c88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218c8c:
    // 0x218c8c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_218c90:
    if (ctx->pc == 0x218C90u) {
        ctx->pc = 0x218C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C8Cu;
        // 0x218c90: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C94u;
        goto label_218c94;
    }
    ctx->pc = 0x218C8Cu;
    {
        const bool branch_taken_0x218c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C8Cu;
        // 0x218c90: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c8c) {
            ctx->pc = 0x218D38u;
            goto label_218d38;
        }
    }
    ctx->pc = 0x218C94u;
label_218c94:
    // 0x218c94: 0xc07f656  jal         func_1FD958
label_218c98:
    if (ctx->pc == 0x218C98u) {
        ctx->pc = 0x218C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C94u;
        // 0x218c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C9Cu;
        goto label_218c9c;
    }
    ctx->pc = 0x218C94u;
    SET_GPR_U32(ctx, 31, 0x218C9Cu);
    ctx->pc = 0x218C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C94u;
    // 0x218c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x218C94u, 0x218C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C9Cu;
label_218c9c:
    // 0x218c9c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x218c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_218ca0:
    // 0x218ca0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_218ca4:
    if (ctx->pc == 0x218CA4u) {
        ctx->pc = 0x218CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CA0u;
        // 0x218ca4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CA8u;
        goto label_218ca8;
    }
    ctx->pc = 0x218CA0u;
    {
        const bool branch_taken_0x218ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CA0u;
        // 0x218ca4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ca0) {
            ctx->pc = 0x218D58u;
            goto label_218d58;
        }
    }
    ctx->pc = 0x218CA8u;
label_218ca8:
    // 0x218ca8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x218ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_218cac:
    // 0x218cac: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x218cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_218cb0:
    // 0x218cb0: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x218cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_218cb4:
    // 0x218cb4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x218cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218cb8:
    // 0x218cb8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_218cbc:
    if (ctx->pc == 0x218CBCu) {
        ctx->pc = 0x218CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CB8u;
        // 0x218cbc: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CC0u;
        goto label_218cc0;
    }
    ctx->pc = 0x218CB8u;
    {
        const bool branch_taken_0x218cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CB8u;
        // 0x218cbc: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cb8) {
            ctx->pc = 0x218D38u;
            goto label_218d38;
        }
    }
    ctx->pc = 0x218CC0u;
label_218cc0:
    // 0x218cc0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x218cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_218cc4:
    // 0x218cc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x218cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218cc8:
    // 0x218cc8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x218cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_218ccc:
    // 0x218ccc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x218cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_218cd0:
    // 0x218cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_218cd4:
    // 0x218cd4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x218cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_218cd8:
    // 0x218cd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218cdc:
    // 0x218cdc: 0x8c638a80  lw          $v1, -0x7580($v1)
    ctx->pc = 0x218cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937216)));
label_218ce0:
    // 0x218ce0: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
label_218ce4:
    if (ctx->pc == 0x218CE4u) {
        ctx->pc = 0x218CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CE0u;
        // 0x218ce4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CE8u;
        goto label_218ce8;
    }
    ctx->pc = 0x218CE0u;
    {
        const bool branch_taken_0x218ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x218CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CE0u;
        // 0x218ce4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ce0) {
            ctx->pc = 0x218D58u;
            goto label_218d58;
        }
    }
    ctx->pc = 0x218CE8u;
label_218ce8:
    // 0x218ce8: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_218cec:
    // 0x218cec: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x218cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_218cf0:
    // 0x218cf0: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x218cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_218cf4:
    // 0x218cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218cf8:
    // 0x218cf8: 0xc07f6bc  jal         func_1FDAF0
label_218cfc:
    if (ctx->pc == 0x218CFCu) {
        ctx->pc = 0x218CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CF8u;
        // 0x218cfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D00u;
        goto label_218d00;
    }
    ctx->pc = 0x218CF8u;
    SET_GPR_U32(ctx, 31, 0x218D00u);
    ctx->pc = 0x218CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CF8u;
    // 0x218cfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x218CF8u, 0x218D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D00u;
label_218d00:
    // 0x218d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x218d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218d04:
    // 0x218d04: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_218d08:
    if (ctx->pc == 0x218D08u) {
        ctx->pc = 0x218D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D04u;
        // 0x218d08: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D0Cu;
        goto label_218d0c;
    }
    ctx->pc = 0x218D04u;
    {
        const bool branch_taken_0x218d04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x218d04) {
            ctx->pc = 0x218D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D04u;
            // 0x218d08: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218D5Cu;
            goto label_218d5c;
        }
    }
    ctx->pc = 0x218D0Cu;
label_218d0c:
    // 0x218d0c: 0xc07f656  jal         func_1FD958
label_218d10:
    if (ctx->pc == 0x218D10u) {
        ctx->pc = 0x218D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D0Cu;
        // 0x218d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D14u;
        goto label_218d14;
    }
    ctx->pc = 0x218D0Cu;
    SET_GPR_U32(ctx, 31, 0x218D14u);
    ctx->pc = 0x218D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D0Cu;
    // 0x218d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x218D0Cu, 0x218D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D14u;
label_218d14:
    // 0x218d14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x218d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_218d18:
    // 0x218d18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_218d1c:
    if (ctx->pc == 0x218D1Cu) {
        ctx->pc = 0x218D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D18u;
        // 0x218d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D20u;
        goto label_218d20;
    }
    ctx->pc = 0x218D18u;
    {
        const bool branch_taken_0x218d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D18u;
        // 0x218d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d18) {
            ctx->pc = 0x218D58u;
            goto label_218d58;
        }
    }
    ctx->pc = 0x218D20u;
label_218d20:
    // 0x218d20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218d24:
    // 0x218d24: 0xc07f6bc  jal         func_1FDAF0
label_218d28:
    if (ctx->pc == 0x218D28u) {
        ctx->pc = 0x218D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D24u;
        // 0x218d28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D2Cu;
        goto label_218d2c;
    }
    ctx->pc = 0x218D24u;
    SET_GPR_U32(ctx, 31, 0x218D2Cu);
    ctx->pc = 0x218D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D24u;
    // 0x218d28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x218D24u, 0x218D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D2Cu;
label_218d2c:
    // 0x218d2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_218d30:
    if (ctx->pc == 0x218D30u) {
        ctx->pc = 0x218D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D2Cu;
        // 0x218d30: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D34u;
        goto label_218d34;
    }
    ctx->pc = 0x218D2Cu;
    {
        const bool branch_taken_0x218d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D2Cu;
        // 0x218d30: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d2c) {
            ctx->pc = 0x218D50u;
            goto label_218d50;
        }
    }
    ctx->pc = 0x218D34u;
label_218d34:
    // 0x218d34: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x218d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_218d38:
    // 0x218d38: 0x2463a1fc  addiu       $v1, $v1, -0x5E04
    ctx->pc = 0x218d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943228));
label_218d3c:
    // 0x218d3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x218d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_218d40:
    // 0x218d40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x218d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_218d44:
    // 0x218d44: 0x10000004  b           . + 4 + (0x4 << 2)
label_218d48:
    if (ctx->pc == 0x218D48u) {
        ctx->pc = 0x218D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D44u;
        // 0x218d48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D4Cu;
        goto label_218d4c;
    }
    ctx->pc = 0x218D44u;
    {
        const bool branch_taken_0x218d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D44u;
        // 0x218d48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d44) {
            ctx->pc = 0x218D58u;
            goto label_218d58;
        }
    }
    ctx->pc = 0x218D4Cu;
label_218d4c:
    // 0x218d4c: 0x0  nop
    ctx->pc = 0x218d4cu;
    // NOP
label_218d50:
    // 0x218d50: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x218d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_218d54:
    // 0x218d54: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x218d54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_218d58:
    // 0x218d58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218d5c:
    // 0x218d5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218d60:
    // 0x218d60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218d64:
    // 0x218d64: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x218d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_218d68:
    // 0x218d68: 0x40f809  jalr        $v0
label_218d6c:
    if (ctx->pc == 0x218D6Cu) {
        ctx->pc = 0x218D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D68u;
        // 0x218d6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D70u;
        goto label_218d70;
    }
    ctx->pc = 0x218D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218D70u);
        ctx->pc = 0x218D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D68u;
        // 0x218d6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218D68u, 0x218D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218D70u;
label_218d70:
    // 0x218d70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x218d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_218d74:
    // 0x218d74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x218d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_218d78:
    // 0x218d78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x218d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_218d7c:
    // 0x218d7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x218d7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_218d80:
    // 0x218d80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x218d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_218d84:
    // 0x218d84: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x218d84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_218d88:
    // 0x218d88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x218d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_218d8c:
    // 0x218d8c: 0x3e00008  jr          $ra
label_218d90:
    if (ctx->pc == 0x218D90u) {
        ctx->pc = 0x218D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D8Cu;
        // 0x218d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D94u;
        goto label_fallthrough_0x218d8c;
    }
    ctx->pc = 0x218D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D8Cu;
        // 0x218d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x218d8c:
    ctx->pc = 0x218D94u;
}
