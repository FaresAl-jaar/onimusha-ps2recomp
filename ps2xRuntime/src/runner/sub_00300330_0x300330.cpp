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

// Function: sub_00300330
// Address: 0x300330 - 0x30046c
void sub_00300330_0x300330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300330_0x300330");
#endif

    switch (ctx->pc) {
        case 0x300390u: goto label_300390;
        case 0x3003b8u: goto label_3003b8;
        case 0x3003f8u: goto label_3003f8;
        case 0x300430u: goto label_300430;
        default: break;
    }

    ctx->pc = 0x300330u;

    // 0x300330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x300330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x300334: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x300334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x300338: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x300338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30033c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x300340: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x300340u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300344: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x300344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x300348: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x300348u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30034c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x300350: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x300350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300354: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x300354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x300358: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x300358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30035c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x300360: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x300360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300364: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x300364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x300368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30036c: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x30036cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x300370: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x300370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300374: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30037c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300380: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x300380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x300384: 0x250802c0  addiu       $t0, $t0, 0x2C0
    ctx->pc = 0x300384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 704));
    // 0x300388: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x300388u;
    SET_GPR_U32(ctx, 31, 0x300390u);
    ctx->pc = 0x30038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300388u;
    // 0x30038c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x300388u, 0x300390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300390u;
label_300390:
    // 0x300390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300394: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x300394u;
    {
        const bool branch_taken_0x300394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300394u;
        // 0x300398: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300394) {
            ctx->pc = 0x300438u;
            goto label_300438;
        }
    }
    ctx->pc = 0x30039Cu;
    // 0x30039c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x30039cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003a0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3003a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003a4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3003a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3003a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3003acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3003b0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3003B0u;
    SET_GPR_U32(ctx, 31, 0x3003B8u);
    ctx->pc = 0x3003B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003B0u;
    // 0x3003b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3003B0u, 0x3003B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003B8u;
label_3003b8:
    // 0x3003b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3003b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3003bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3003bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3003c0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x3003c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3003c4: 0x2442c730  addiu       $v0, $v0, -0x38D0
    ctx->pc = 0x3003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952752));
    // 0x3003c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3003c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3003cc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3003ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3003d0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3003d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3003d4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3003d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3003d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3003d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003dc: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x3003dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3003e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3003e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3003e4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3003e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3003e8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3003e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3003ec: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3003ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3003f0: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3003F0u;
    SET_GPR_U32(ctx, 31, 0x3003F8u);
    ctx->pc = 0x3003F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003F0u;
    // 0x3003f4: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3003F0u, 0x3003F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003F8u;
label_3003f8:
    // 0x3003f8: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3003f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3003fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300400: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x300400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x300404: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x300404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x300408: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x300408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x30040c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x30040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x300410: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x300410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x300414: 0x2442c734  addiu       $v0, $v0, -0x38CC
    ctx->pc = 0x300414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952756));
    // 0x300418: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x300418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30041c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x30041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x300420: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x300420u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x300424: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x300424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300428: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x300428u;
    SET_GPR_U32(ctx, 31, 0x300430u);
    ctx->pc = 0x30042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300428u;
    // 0x30042c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x300428u, 0x300430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300430u;
label_300430:
    // 0x300430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x300430u;
    {
        const bool branch_taken_0x300430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300430u;
        // 0x300434: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300430) {
            ctx->pc = 0x300440u;
            goto label_300440;
        }
    }
    ctx->pc = 0x300438u;
label_300438:
    // 0x300438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x300438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30043c: 0x0  nop
    ctx->pc = 0x30043cu;
    // NOP
label_300440:
    // 0x300440: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x300440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300444: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x300444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300448: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x300448u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30044c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30044cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300450: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300454: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x300454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300458: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30045c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30045cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300464: 0x3e00008  jr          $ra
    ctx->pc = 0x300464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300464u;
        // 0x300468: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30046Cu;
}
