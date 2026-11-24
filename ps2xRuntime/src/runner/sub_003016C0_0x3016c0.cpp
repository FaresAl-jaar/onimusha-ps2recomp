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

// Function: sub_003016C0
// Address: 0x3016c0 - 0x3017fc
void sub_003016C0_0x3016c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003016C0_0x3016c0");
#endif

    switch (ctx->pc) {
        case 0x301720u: goto label_301720;
        case 0x301748u: goto label_301748;
        case 0x301784u: goto label_301784;
        case 0x3017bcu: goto label_3017bc;
        default: break;
    }

    ctx->pc = 0x3016c0u;

    // 0x3016c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3016c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3016c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3016c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3016c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3016cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3016ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3016d0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3016d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3016d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3016d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3016d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3016dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3016e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3016e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3016e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3016e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3016e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3016ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3016f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3016f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3016f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3016f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3016fc: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x3016fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x301700: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x301700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301704: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x301704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30170c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30170cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301710: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x301710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x301714: 0x25081650  addiu       $t0, $t0, 0x1650
    ctx->pc = 0x301714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5712));
    // 0x301718: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x301718u;
    SET_GPR_U32(ctx, 31, 0x301720u);
    ctx->pc = 0x30171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301718u;
    // 0x30171c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x301718u, 0x301720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301720u;
label_301720:
    // 0x301720: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301724: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x301724u;
    {
        const bool branch_taken_0x301724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301724u;
        // 0x301728: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301724) {
            ctx->pc = 0x3017C8u;
            goto label_3017c8;
        }
    }
    ctx->pc = 0x30172Cu;
    // 0x30172c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x30172cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301730: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x301730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301734: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x301734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30173c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301740: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x301740u;
    SET_GPR_U32(ctx, 31, 0x301748u);
    ctx->pc = 0x301744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301740u;
    // 0x301744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x301740u, 0x301748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301748u;
label_301748:
    // 0x301748: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x301748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x30174c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x30174cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x301750: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x301750u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x301754: 0x2442c740  addiu       $v0, $v0, -0x38C0
    ctx->pc = 0x301754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x301758: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x301758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x30175c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x301760: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x301760u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301768: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x301768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x30176c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301770: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x301770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x301774: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x301774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x301778: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x301778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x30177c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x30177Cu;
    SET_GPR_U32(ctx, 31, 0x301784u);
    ctx->pc = 0x301780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30177Cu;
    // 0x301780: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x30177Cu, 0x301784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301784u;
label_301784:
    // 0x301784: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x301784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x301788: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x301788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30178c: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x30178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x301790: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x301790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x301794: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x301794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x301798: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x301798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x30179c: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x30179cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3017a0: 0x2442c744  addiu       $v0, $v0, -0x38BC
    ctx->pc = 0x3017a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952772));
    // 0x3017a4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3017a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3017a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3017a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3017ac: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3017acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3017b0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3017b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3017b4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3017B4u;
    SET_GPR_U32(ctx, 31, 0x3017BCu);
    ctx->pc = 0x3017B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017B4u;
    // 0x3017b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3017B4u, 0x3017BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017BCu;
label_3017bc:
    // 0x3017bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3017BCu;
    {
        const bool branch_taken_0x3017bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3017C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017BCu;
        // 0x3017c0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017bc) {
            ctx->pc = 0x3017D0u;
            goto label_3017d0;
        }
    }
    ctx->pc = 0x3017C4u;
    // 0x3017c4: 0x0  nop
    ctx->pc = 0x3017c4u;
    // NOP
label_3017c8:
    // 0x3017c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3017c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017cc: 0x0  nop
    ctx->pc = 0x3017ccu;
    // NOP
label_3017d0:
    // 0x3017d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3017d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3017d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3017d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3017d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3017d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3017dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3017dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3017e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3017e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3017e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3017e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3017e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3017e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3017ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3017ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3017f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3017f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3017f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3017F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3017F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017F4u;
        // 0x3017f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3017F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3017FCu;
}
