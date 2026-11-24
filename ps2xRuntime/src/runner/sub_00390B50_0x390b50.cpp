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

// Function: sub_00390B50
// Address: 0x390b50 - 0x390c68
void sub_00390B50_0x390b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390B50_0x390b50");
#endif

    switch (ctx->pc) {
        case 0x390ba8u: goto label_390ba8;
        case 0x390bd0u: goto label_390bd0;
        case 0x390bf8u: goto label_390bf8;
        default: break;
    }

    ctx->pc = 0x390b50u;

    // 0x390b50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x390b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x390b54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x390b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x390b58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x390b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x390b5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x390b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x390b60: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x390b60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x390b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x390b68: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x390b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x390b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x390b70: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x390b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x390b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x390b78: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x390b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b7c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x390b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x390b84: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x390b84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x390b88: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x390b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x390b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b98: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x390b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x390b9c: 0x25080ae0  addiu       $t0, $t0, 0xAE0
    ctx->pc = 0x390b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2784));
    // 0x390ba0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x390BA0u;
    SET_GPR_U32(ctx, 31, 0x390BA8u);
    ctx->pc = 0x390BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BA0u;
    // 0x390ba4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x390BA0u, 0x390BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BA8u;
label_390ba8:
    // 0x390ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bac: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x390BACu;
    {
        const bool branch_taken_0x390bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BACu;
        // 0x390bb0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bac) {
            ctx->pc = 0x390C38u;
            goto label_390c38;
        }
    }
    ctx->pc = 0x390BB4u;
    // 0x390bb4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x390bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bb8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x390bb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bbc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x390bbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390bc4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x390bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x390bc8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x390BC8u;
    SET_GPR_U32(ctx, 31, 0x390BD0u);
    ctx->pc = 0x390BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BC8u;
    // 0x390bcc: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x390BC8u, 0x390BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BD0u;
label_390bd0:
    // 0x390bd0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x390bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x390bd4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x390bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x390bd8: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x390bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x390bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390be0: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x390be0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x390be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x390be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390be8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x390be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x390bec: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x390becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x390bf0: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x390BF0u;
    SET_GPR_U32(ctx, 31, 0x390BF8u);
    ctx->pc = 0x390BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BF0u;
    // 0x390bf4: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x390BF0u, 0x390BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BF8u;
label_390bf8:
    // 0x390bf8: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x390bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x390bfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x390bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x390c00: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x390c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x390c04: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x390c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x390c08: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x390c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x390c0c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x390c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x390c10: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x390c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x390c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390c18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x390c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390c1c: 0xa2020558  sb          $v0, 0x558($s0)
    ctx->pc = 0x390c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x390c20: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x390c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x390c24: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x390c24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x390c28: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x390c28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x390c2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390C2Cu;
    {
        const bool branch_taken_0x390c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C2Cu;
        // 0x390c30: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c2c) {
            ctx->pc = 0x390C40u;
            goto label_390c40;
        }
    }
    ctx->pc = 0x390C34u;
    // 0x390c34: 0x0  nop
    ctx->pc = 0x390c34u;
    // NOP
label_390c38:
    // 0x390c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x390c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390c3c: 0x0  nop
    ctx->pc = 0x390c3cu;
    // NOP
label_390c40:
    // 0x390c40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x390c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x390c44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x390c44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x390c48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x390c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x390c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x390c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390c60: 0x3e00008  jr          $ra
    ctx->pc = 0x390C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C60u;
        // 0x390c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390C68u;
}
