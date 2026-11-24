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

// Function: sub_0030CCC0
// Address: 0x30ccc0 - 0x30cdc4
void sub_0030CCC0_0x30ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CCC0_0x30ccc0");
#endif

    switch (ctx->pc) {
        case 0x30cd08u: goto label_30cd08;
        case 0x30cd44u: goto label_30cd44;
        case 0x30cd84u: goto label_30cd84;
        case 0x30cda8u: goto label_30cda8;
        default: break;
    }

    ctx->pc = 0x30ccc0u;

    // 0x30ccc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30ccc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30ccc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30cccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ccd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30ccd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ccd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30ccd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccdc: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x30ccdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x30cce0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CCE0u;
    {
        const bool branch_taken_0x30cce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCE0u;
        // 0x30cce4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cce0) {
            ctx->pc = 0x30CD18u;
            goto label_30cd18;
        }
    }
    ctx->pc = 0x30CCE8u;
    // 0x30cce8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x30cce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ccec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30CCECu;
    {
        const bool branch_taken_0x30ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ccec) {
            ctx->pc = 0x30CD18u;
            goto label_30cd18;
        }
    }
    ctx->pc = 0x30CCF4u;
    // 0x30ccf4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x30ccf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x30ccf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30ccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30ccfc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x30ccfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cd00: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CD00u;
    SET_GPR_U32(ctx, 31, 0x30CD08u);
    ctx->pc = 0x30CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD00u;
    // 0x30cd04: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CD00u, 0x30CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD08u;
label_30cd08:
    // 0x30cd08: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x30cd08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cd0c: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x30cd0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x30cd10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30cd14: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x30cd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_30cd18:
    // 0x30cd18: 0x92220041  lbu         $v0, 0x41($s1)
    ctx->pc = 0x30cd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
    // 0x30cd1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30CD1Cu;
    {
        const bool branch_taken_0x30cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cd1c) {
            ctx->pc = 0x30CD58u;
            goto label_30cd58;
        }
    }
    ctx->pc = 0x30CD24u;
    // 0x30cd24: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x30cd24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30cd28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30CD28u;
    {
        const bool branch_taken_0x30cd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cd28) {
            ctx->pc = 0x30CD58u;
            goto label_30cd58;
        }
    }
    ctx->pc = 0x30CD30u;
    // 0x30cd30: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x30cd30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30cd34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30cd38: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x30cd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cd3c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CD3Cu;
    SET_GPR_U32(ctx, 31, 0x30CD44u);
    ctx->pc = 0x30CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD3Cu;
    // 0x30cd40: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CD3Cu, 0x30CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD44u;
label_30cd44:
    // 0x30cd44: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x30cd44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cd48: 0x92220041  lbu         $v0, 0x41($s1)
    ctx->pc = 0x30cd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 65)));
    // 0x30cd4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30cd50: 0xa2220041  sb          $v0, 0x41($s1)
    ctx->pc = 0x30cd50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x30cd54: 0x0  nop
    ctx->pc = 0x30cd54u;
    // NOP
label_30cd58:
    // 0x30cd58: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x30cd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x30cd5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30CD5Cu;
    {
        const bool branch_taken_0x30cd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cd5c) {
            ctx->pc = 0x30CD98u;
            goto label_30cd98;
        }
    }
    ctx->pc = 0x30CD64u;
    // 0x30cd64: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x30cd64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30cd68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30CD68u;
    {
        const bool branch_taken_0x30cd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cd68) {
            ctx->pc = 0x30CD98u;
            goto label_30cd98;
        }
    }
    ctx->pc = 0x30CD70u;
    // 0x30cd70: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x30cd70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30cd74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30cd78: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x30cd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cd7c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x30CD7Cu;
    SET_GPR_U32(ctx, 31, 0x30CD84u);
    ctx->pc = 0x30CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD7Cu;
    // 0x30cd80: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x30CD7Cu, 0x30CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD84u;
label_30cd84:
    // 0x30cd84: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x30cd84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cd88: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x30cd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x30cd8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30cd90: 0xa2220042  sb          $v0, 0x42($s1)
    ctx->pc = 0x30cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x30cd94: 0x0  nop
    ctx->pc = 0x30cd94u;
    // NOP
label_30cd98:
    // 0x30cd98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cda0: 0xc0c32a8  jal         func_30CAA0
    ctx->pc = 0x30CDA0u;
    SET_GPR_U32(ctx, 31, 0x30CDA8u);
    ctx->pc = 0x30CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDA0u;
    // 0x30cda4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAA0u, 0x30CDA0u, 0x30CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDA8u;
label_30cda8:
    // 0x30cda8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cdac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cdb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30cdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30cdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cdb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30cdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x30CDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDBCu;
        // 0x30cdc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CDC4u;
}
