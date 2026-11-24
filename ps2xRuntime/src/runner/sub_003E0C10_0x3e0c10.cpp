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

// Function: sub_003E0C10
// Address: 0x3e0c10 - 0x3e0df0
void sub_003E0C10_0x3e0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0C10_0x3e0c10");
#endif

    switch (ctx->pc) {
        case 0x3e0c64u: goto label_3e0c64;
        case 0x3e0c78u: goto label_3e0c78;
        case 0x3e0ca8u: goto label_3e0ca8;
        case 0x3e0cd0u: goto label_3e0cd0;
        case 0x3e0cecu: goto label_3e0cec;
        case 0x3e0d4cu: goto label_3e0d4c;
        case 0x3e0d5cu: goto label_3e0d5c;
        case 0x3e0d78u: goto label_3e0d78;
        case 0x3e0d90u: goto label_3e0d90;
        case 0x3e0da0u: goto label_3e0da0;
        case 0x3e0db0u: goto label_3e0db0;
        default: break;
    }

    ctx->pc = 0x3e0c10u;

    // 0x3e0c10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e0c14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3e0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3e0c18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3e0c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3e0c1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e0c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3e0c20: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3e0c20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e0c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3e0c28: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3e0c28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3e0c30: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3e0c30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e0c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e0c38: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e0c38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e0c40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e0c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e0c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e0c48: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e0c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e0c50: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3e0c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c54: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3e0c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c58: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x3e0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x3e0c5c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x3E0C5Cu;
    SET_GPR_U32(ctx, 31, 0x3E0C64u);
    ctx->pc = 0x3E0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0C5Cu;
    // 0x3e0c60: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x3E0C5Cu, 0x3E0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0C64u;
label_3e0c64:
    // 0x3e0c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0c68: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E0C68u;
    {
        const bool branch_taken_0x3e0c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C68u;
        // 0x3e0c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c68) {
            ctx->pc = 0x3E0C98u;
            goto label_3e0c98;
        }
    }
    ctx->pc = 0x3E0C70u;
    // 0x3e0c70: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x3E0C70u;
    SET_GPR_U32(ctx, 31, 0x3E0C78u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x3E0C70u, 0x3E0C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0C78u;
label_3e0c78:
    // 0x3e0c78: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3e0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3e0c7c: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x3e0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x3e0c80: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x3e0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x3e0c84: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3e0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x3e0c88: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3e0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x3e0c8c: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3e0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x3e0c90: 0xa20000c4  sb          $zero, 0xC4($s0)
    ctx->pc = 0x3e0c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e0c94: 0x0  nop
    ctx->pc = 0x3e0c94u;
    // NOP
label_3e0c98:
    // 0x3e0c98: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3E0C98u;
    {
        const bool branch_taken_0x3e0c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C98u;
        // 0x3e0c9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c98) {
            ctx->pc = 0x3E0DB8u;
            goto label_3e0db8;
        }
    }
    ctx->pc = 0x3E0CA0u;
    // 0x3e0ca0: 0xc096c94  jal         func_25B250
    ctx->pc = 0x3E0CA0u;
    SET_GPR_U32(ctx, 31, 0x3E0CA8u);
    ctx->pc = 0x3E0CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0CA0u;
    // 0x3e0ca4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x3E0CA0u, 0x3E0CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0CA8u;
label_3e0ca8:
    // 0x3e0ca8: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x3e0ca8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x3e0cac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3e0cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cb0: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x3e0cb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x3e0cb4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3e0cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cb8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3e0cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e0cbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cc4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3e0cc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cc8: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x3E0CC8u;
    SET_GPR_U32(ctx, 31, 0x3E0CD0u);
    ctx->pc = 0x3E0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0CC8u;
    // 0x3e0ccc: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x3E0CC8u, 0x3E0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0CD0u;
label_3e0cd0:
    // 0x3e0cd0: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x3e0cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3e0cd4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0CD4u;
    {
        const bool branch_taken_0x3e0cd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CD4u;
        // 0x3e0cd8: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0cd4) {
            ctx->pc = 0x3E0CF8u;
            goto label_3e0cf8;
        }
    }
    ctx->pc = 0x3E0CDCu;
    // 0x3e0cdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3e0cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ce0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x3e0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3e0ce4: 0xc097340  jal         func_25CD00
    ctx->pc = 0x3E0CE4u;
    SET_GPR_U32(ctx, 31, 0x3E0CECu);
    ctx->pc = 0x3E0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0CE4u;
    // 0x3e0ce8: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x3E0CE4u, 0x3E0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0CECu;
label_3e0cec:
    // 0x3e0cec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3E0CECu;
    {
        const bool branch_taken_0x3e0cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0cec) {
            ctx->pc = 0x3E0D30u;
            goto label_3e0d30;
        }
    }
    ctx->pc = 0x3E0CF4u;
    // 0x3e0cf4: 0x0  nop
    ctx->pc = 0x3e0cf4u;
    // NOP
label_3e0cf8:
    // 0x3e0cf8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e0cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e0cfc: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x3e0cfcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x3e0d00: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x3e0d00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x3e0d04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e0d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e0d08: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3e0d08u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3e0d0c: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x3e0d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x3e0d10: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e0d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e0d14: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3e0d14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3e0d18: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3e0d18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3e0d1c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e0d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e0d20: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3e0d20u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3e0d24: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x3e0d24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x3e0d28: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3e0d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e0d2c: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x3e0d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
label_3e0d30:
    // 0x3e0d30: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x3e0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3e0d34: 0xa6020056  sh          $v0, 0x56($s0)
    ctx->pc = 0x3e0d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e0d38: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x3e0d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3e0d3c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x3e0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x3e0d40: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3e0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x3e0d44: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x3E0D44u;
    SET_GPR_U32(ctx, 31, 0x3E0D4Cu);
    ctx->pc = 0x3E0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0D44u;
    // 0x3e0d48: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x3E0D44u, 0x3E0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0D4Cu;
label_3e0d4c:
    // 0x3e0d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0D4Cu;
    {
        const bool branch_taken_0x3e0d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D4Cu;
        // 0x3e0d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d4c) {
            ctx->pc = 0x3E0D60u;
            goto label_3e0d60;
        }
    }
    ctx->pc = 0x3E0D54u;
    // 0x3e0d54: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x3E0D54u;
    SET_GPR_U32(ctx, 31, 0x3E0D5Cu);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x3E0D54u, 0x3E0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0D5Cu;
label_3e0d5c:
    // 0x3e0d5c: 0x0  nop
    ctx->pc = 0x3e0d5cu;
    // NOP
label_3e0d60:
    // 0x3e0d60: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3e0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x3e0d64: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3e0d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3e0d68: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0D68u;
    {
        const bool branch_taken_0x3e0d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0d68) {
            ctx->pc = 0x3E0D80u;
            goto label_3e0d80;
        }
    }
    ctx->pc = 0x3E0D70u;
    // 0x3e0d70: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x3E0D70u;
    SET_GPR_U32(ctx, 31, 0x3E0D78u);
    ctx->pc = 0x3E0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0D70u;
    // 0x3e0d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x3E0D70u, 0x3E0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0D78u;
label_3e0d78:
    // 0x3e0d78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E0D78u;
    {
        const bool branch_taken_0x3e0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D78u;
        // 0x3e0d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d78) {
            ctx->pc = 0x3E0DC0u;
            goto label_3e0dc0;
        }
    }
    ctx->pc = 0x3E0D80u;
label_3e0d80:
    // 0x3e0d80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0d84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e0d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0d88: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x3E0D88u;
    SET_GPR_U32(ctx, 31, 0x3E0D90u);
    ctx->pc = 0x3E0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0D88u;
    // 0x3e0d8c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x3E0D88u, 0x3E0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0D90u;
label_3e0d90:
    // 0x3e0d90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0D90u;
    {
        const bool branch_taken_0x3e0d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D90u;
        // 0x3e0d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d90) {
            ctx->pc = 0x3E0DA8u;
            goto label_3e0da8;
        }
    }
    ctx->pc = 0x3E0D98u;
    // 0x3e0d98: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x3E0D98u;
    SET_GPR_U32(ctx, 31, 0x3E0DA0u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x3E0D98u, 0x3E0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0DA0u;
label_3e0da0:
    // 0x3e0da0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0DA0u;
    {
        const bool branch_taken_0x3e0da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DA0u;
        // 0x3e0da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0da0) {
            ctx->pc = 0x3E0DC0u;
            goto label_3e0dc0;
        }
    }
    ctx->pc = 0x3E0DA8u;
label_3e0da8:
    // 0x3e0da8: 0xc0f8280  jal         func_3E0A00
    ctx->pc = 0x3E0DA8u;
    SET_GPR_U32(ctx, 31, 0x3E0DB0u);
    ctx->pc = 0x3E0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0DA8u;
    // 0x3e0dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0A00u, 0x3E0DA8u, 0x3E0DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0DB0u;
label_3e0db0:
    // 0x3e0db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0DB0u;
    {
        const bool branch_taken_0x3e0db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DB0u;
        // 0x3e0db4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0db0) {
            ctx->pc = 0x3E0DC0u;
            goto label_3e0dc0;
        }
    }
    ctx->pc = 0x3E0DB8u;
label_3e0db8:
    // 0x3e0db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0dbc: 0x0  nop
    ctx->pc = 0x3e0dbcu;
    // NOP
label_3e0dc0:
    // 0x3e0dc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3e0dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e0dc4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3e0dc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e0dc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e0dc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e0dcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e0dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e0dd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e0dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e0dd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e0dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e0dd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e0dd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e0ddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e0ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e0de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e0de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0de8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DE8u;
        // 0x3e0dec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0DF0u;
}
