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

// Function: sub_00225CA0
// Address: 0x225ca0 - 0x225e00
void sub_00225CA0_0x225ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225CA0_0x225ca0");
#endif

    switch (ctx->pc) {
        case 0x225ca0u: goto label_225ca0;
        case 0x225ca4u: goto label_225ca4;
        case 0x225ca8u: goto label_225ca8;
        case 0x225cacu: goto label_225cac;
        case 0x225cb0u: goto label_225cb0;
        case 0x225cb4u: goto label_225cb4;
        case 0x225cb8u: goto label_225cb8;
        case 0x225cbcu: goto label_225cbc;
        case 0x225cc0u: goto label_225cc0;
        case 0x225cc4u: goto label_225cc4;
        case 0x225cc8u: goto label_225cc8;
        case 0x225cccu: goto label_225ccc;
        case 0x225cd0u: goto label_225cd0;
        case 0x225cd4u: goto label_225cd4;
        case 0x225cd8u: goto label_225cd8;
        case 0x225cdcu: goto label_225cdc;
        case 0x225ce0u: goto label_225ce0;
        case 0x225ce4u: goto label_225ce4;
        case 0x225ce8u: goto label_225ce8;
        case 0x225cecu: goto label_225cec;
        case 0x225cf0u: goto label_225cf0;
        case 0x225cf4u: goto label_225cf4;
        case 0x225cf8u: goto label_225cf8;
        case 0x225cfcu: goto label_225cfc;
        case 0x225d00u: goto label_225d00;
        case 0x225d04u: goto label_225d04;
        case 0x225d08u: goto label_225d08;
        case 0x225d0cu: goto label_225d0c;
        case 0x225d10u: goto label_225d10;
        case 0x225d14u: goto label_225d14;
        case 0x225d18u: goto label_225d18;
        case 0x225d1cu: goto label_225d1c;
        case 0x225d20u: goto label_225d20;
        case 0x225d24u: goto label_225d24;
        case 0x225d28u: goto label_225d28;
        case 0x225d2cu: goto label_225d2c;
        case 0x225d30u: goto label_225d30;
        case 0x225d34u: goto label_225d34;
        case 0x225d38u: goto label_225d38;
        case 0x225d3cu: goto label_225d3c;
        case 0x225d40u: goto label_225d40;
        case 0x225d44u: goto label_225d44;
        case 0x225d48u: goto label_225d48;
        case 0x225d4cu: goto label_225d4c;
        case 0x225d50u: goto label_225d50;
        case 0x225d54u: goto label_225d54;
        case 0x225d58u: goto label_225d58;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d60u: goto label_225d60;
        case 0x225d64u: goto label_225d64;
        case 0x225d68u: goto label_225d68;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d70u: goto label_225d70;
        case 0x225d74u: goto label_225d74;
        case 0x225d78u: goto label_225d78;
        case 0x225d7cu: goto label_225d7c;
        case 0x225d80u: goto label_225d80;
        case 0x225d84u: goto label_225d84;
        case 0x225d88u: goto label_225d88;
        case 0x225d8cu: goto label_225d8c;
        case 0x225d90u: goto label_225d90;
        case 0x225d94u: goto label_225d94;
        case 0x225d98u: goto label_225d98;
        case 0x225d9cu: goto label_225d9c;
        case 0x225da0u: goto label_225da0;
        case 0x225da4u: goto label_225da4;
        case 0x225da8u: goto label_225da8;
        case 0x225dacu: goto label_225dac;
        case 0x225db0u: goto label_225db0;
        case 0x225db4u: goto label_225db4;
        case 0x225db8u: goto label_225db8;
        case 0x225dbcu: goto label_225dbc;
        case 0x225dc0u: goto label_225dc0;
        case 0x225dc4u: goto label_225dc4;
        case 0x225dc8u: goto label_225dc8;
        case 0x225dccu: goto label_225dcc;
        case 0x225dd0u: goto label_225dd0;
        case 0x225dd4u: goto label_225dd4;
        case 0x225dd8u: goto label_225dd8;
        case 0x225ddcu: goto label_225ddc;
        case 0x225de0u: goto label_225de0;
        case 0x225de4u: goto label_225de4;
        case 0x225de8u: goto label_225de8;
        case 0x225decu: goto label_225dec;
        case 0x225df0u: goto label_225df0;
        case 0x225df4u: goto label_225df4;
        case 0x225df8u: goto label_225df8;
        case 0x225dfcu: goto label_225dfc;
        default: break;
    }

    ctx->pc = 0x225ca0u;

label_225ca0:
    // 0x225ca0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x225ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_225ca4:
    // 0x225ca4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x225ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_225ca8:
    // 0x225ca8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x225ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_225cac:
    // 0x225cac: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x225cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
label_225cb0:
    // 0x225cb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225cb4:
    // 0x225cb4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225cb8:
    // 0x225cb8: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x225cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_225cbc:
    // 0x225cbc: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x225cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_225cc0:
    // 0x225cc0: 0xc0896c4  jal         func_225B10
label_225cc4:
    if (ctx->pc == 0x225CC4u) {
        ctx->pc = 0x225CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CC0u;
        // 0x225cc4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CC8u;
        goto label_225cc8;
    }
    ctx->pc = 0x225CC0u;
    SET_GPR_U32(ctx, 31, 0x225CC8u);
    ctx->pc = 0x225CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CC0u;
    // 0x225cc4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B10u, 0x225CC0u, 0x225CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CC8u;
label_225cc8:
    // 0x225cc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_225ccc:
    // 0x225ccc: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x225cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_225cd0:
    // 0x225cd0: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x225cd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_225cd4:
    // 0x225cd4: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x225cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_225cd8:
    // 0x225cd8: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_225cdc:
    if (ctx->pc == 0x225CDCu) {
        ctx->pc = 0x225CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CD8u;
        // 0x225cdc: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CE0u;
        goto label_225ce0;
    }
    ctx->pc = 0x225CD8u;
    {
        const bool branch_taken_0x225cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CD8u;
        // 0x225cdc: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cd8) {
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225CE0u;
label_225ce0:
    // 0x225ce0: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x225ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_225ce4:
    // 0x225ce4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_225ce8:
    if (ctx->pc == 0x225CE8u) {
        ctx->pc = 0x225CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE4u;
        // 0x225ce8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CECu;
        goto label_225cec;
    }
    ctx->pc = 0x225CE4u;
    {
        const bool branch_taken_0x225ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ce4) {
            ctx->pc = 0x225CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225CE4u;
            // 0x225ce8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225D68u;
            goto label_225d68;
        }
    }
    ctx->pc = 0x225CECu;
label_225cec:
    // 0x225cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x225cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_225cf0:
    // 0x225cf0: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_225cf4:
    if (ctx->pc == 0x225CF4u) {
        ctx->pc = 0x225CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CF0u;
        // 0x225cf4: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CF8u;
        goto label_225cf8;
    }
    ctx->pc = 0x225CF0u;
    {
        const bool branch_taken_0x225cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CF0u;
        // 0x225cf4: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cf0) {
            ctx->pc = 0x225DA4u;
            goto label_225da4;
        }
    }
    ctx->pc = 0x225CF8u;
label_225cf8:
    // 0x225cf8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x225cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_225cfc:
    // 0x225cfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_225d00:
    // 0x225d00: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_225d04:
    // 0x225d04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x225d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_225d08:
    // 0x225d08: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x225d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_225d0c:
    // 0x225d0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x225d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_225d10:
    // 0x225d10: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x225d10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_225d14:
    // 0x225d14: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x225d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_225d18:
    // 0x225d18: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x225d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_225d1c:
    // 0x225d1c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_225d20:
    // 0x225d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225d24:
    // 0x225d24: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x225d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
label_225d28:
    // 0x225d28: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_225d2c:
    // 0x225d2c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x225d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_225d30:
    // 0x225d30: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x225d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_225d34:
    // 0x225d34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_225d38:
    // 0x225d38: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x225d38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_225d3c:
    // 0x225d3c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x225d3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_225d40:
    // 0x225d40: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_225d44:
    // 0x225d44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_225d48:
    // 0x225d48: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x225d48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_225d4c:
    // 0x225d4c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x225d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_225d50:
    // 0x225d50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x225d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225d54:
    // 0x225d54: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x225d54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_225d58:
    // 0x225d58: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_225d5c:
    if (ctx->pc == 0x225D5Cu) {
        ctx->pc = 0x225D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D58u;
        // 0x225d5c: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D60u;
        goto label_225d60;
    }
    ctx->pc = 0x225D58u;
    {
        const bool branch_taken_0x225d58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D58u;
        // 0x225d5c: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d58) {
            ctx->pc = 0x225D84u;
            goto label_225d84;
        }
    }
    ctx->pc = 0x225D60u;
label_225d60:
    // 0x225d60: 0x10000014  b           . + 4 + (0x14 << 2)
label_225d64:
    if (ctx->pc == 0x225D64u) {
        ctx->pc = 0x225D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D60u;
        // 0x225d64: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D68u;
        goto label_225d68;
    }
    ctx->pc = 0x225D60u;
    {
        const bool branch_taken_0x225d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D60u;
        // 0x225d64: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d60) {
            ctx->pc = 0x225DB4u;
            goto label_225db4;
        }
    }
    ctx->pc = 0x225D68u;
label_225d68:
    // 0x225d68: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_225d6c:
    // 0x225d6c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x225d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_225d70:
    // 0x225d70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x225d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_225d74:
    // 0x225d74: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x225d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_225d78:
    // 0x225d78: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x225d78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_225d7c:
    // 0x225d7c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_225d80:
    if (ctx->pc == 0x225D80u) {
        ctx->pc = 0x225D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D7Cu;
        // 0x225d80: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D84u;
        goto label_225d84;
    }
    ctx->pc = 0x225D7Cu;
    {
        const bool branch_taken_0x225d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D7Cu;
        // 0x225d80: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d7c) {
            ctx->pc = 0x225D98u;
            goto label_225d98;
        }
    }
    ctx->pc = 0x225D84u;
label_225d84:
    // 0x225d84: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x225d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_225d88:
    // 0x225d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_225d8c:
    // 0x225d8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_225d90:
    if (ctx->pc == 0x225D90u) {
        ctx->pc = 0x225D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D8Cu;
        // 0x225d90: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D94u;
        goto label_225d94;
    }
    ctx->pc = 0x225D8Cu;
    {
        const bool branch_taken_0x225d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D8Cu;
        // 0x225d90: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d8c) {
            ctx->pc = 0x225DB4u;
            goto label_225db4;
        }
    }
    ctx->pc = 0x225D94u;
label_225d94:
    // 0x225d94: 0x0  nop
    ctx->pc = 0x225d94u;
    // NOP
label_225d98:
    // 0x225d98: 0x10000006  b           . + 4 + (0x6 << 2)
label_225d9c:
    if (ctx->pc == 0x225D9Cu) {
        ctx->pc = 0x225D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D98u;
        // 0x225d9c: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DA0u;
        goto label_225da0;
    }
    ctx->pc = 0x225D98u;
    {
        const bool branch_taken_0x225d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D98u;
        // 0x225d9c: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d98) {
            ctx->pc = 0x225DB4u;
            goto label_225db4;
        }
    }
    ctx->pc = 0x225DA0u;
label_225da0:
    // 0x225da0: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x225da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_225da4:
    // 0x225da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225da8:
    // 0x225da8: 0x24c692b0  addiu       $a2, $a2, -0x6D50
    ctx->pc = 0x225da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939312));
label_225dac:
    // 0x225dac: 0xc0898b2  jal         func_2262C8
label_225db0:
    if (ctx->pc == 0x225DB0u) {
        ctx->pc = 0x225DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DACu;
        // 0x225db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DB4u;
        goto label_225db4;
    }
    ctx->pc = 0x225DACu;
    SET_GPR_U32(ctx, 31, 0x225DB4u);
    ctx->pc = 0x225DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DACu;
    // 0x225db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x225DACu, 0x225DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DB4u;
label_225db4:
    // 0x225db4: 0xc0898c6  jal         func_226318
label_225db8:
    if (ctx->pc == 0x225DB8u) {
        ctx->pc = 0x225DBCu;
        goto label_225dbc;
    }
    ctx->pc = 0x225DB4u;
    SET_GPR_U32(ctx, 31, 0x225DBCu);
    ctx->pc = 0x226318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226318u, 0x225DB4u, 0x225DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DBCu;
label_225dbc:
    // 0x225dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225dc0:
    // 0x225dc0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_225dc4:
    if (ctx->pc == 0x225DC4u) {
        ctx->pc = 0x225DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DC0u;
        // 0x225dc4: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DC8u;
        goto label_225dc8;
    }
    ctx->pc = 0x225DC0u;
    {
        const bool branch_taken_0x225dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225dc0) {
            ctx->pc = 0x225DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225DC0u;
            // 0x225dc4: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225DD0u;
            goto label_225dd0;
        }
    }
    ctx->pc = 0x225DC8u;
label_225dc8:
    // 0x225dc8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x225dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_225dcc:
    // 0x225dcc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x225dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_225dd0:
    // 0x225dd0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x225dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_225dd4:
    // 0x225dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_225dd8:
    if (ctx->pc == 0x225DD8u) {
        ctx->pc = 0x225DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DD4u;
        // 0x225dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DDCu;
        goto label_225ddc;
    }
    ctx->pc = 0x225DD4u;
    {
        const bool branch_taken_0x225dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DD4u;
        // 0x225dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225dd4) {
            ctx->pc = 0x225DE8u;
            goto label_225de8;
        }
    }
    ctx->pc = 0x225DDCu;
label_225ddc:
    // 0x225ddc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x225ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_225de0:
    // 0x225de0: 0x40f809  jalr        $v0
label_225de4:
    if (ctx->pc == 0x225DE4u) {
        ctx->pc = 0x225DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE0u;
        // 0x225de4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DE8u;
        goto label_225de8;
    }
    ctx->pc = 0x225DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225DE8u);
        ctx->pc = 0x225DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DE0u;
        // 0x225de4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DE0u, 0x225DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225DE8u;
label_225de8:
    // 0x225de8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x225de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_225dec:
    // 0x225dec: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x225decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_225df0:
    // 0x225df0: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x225df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_225df4:
    // 0x225df4: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x225df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_225df8:
    // 0x225df8: 0x3e00008  jr          $ra
label_225dfc:
    if (ctx->pc == 0x225DFCu) {
        ctx->pc = 0x225DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DF8u;
        // 0x225dfc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E00u;
        goto label_fallthrough_0x225df8;
    }
    ctx->pc = 0x225DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DF8u;
        // 0x225dfc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225df8:
    ctx->pc = 0x225E00u;
}
