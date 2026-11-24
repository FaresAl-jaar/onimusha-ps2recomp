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

// Function: sub_00328250
// Address: 0x328250 - 0x328380
void sub_00328250_0x328250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328250_0x328250");
#endif

    switch (ctx->pc) {
        case 0x3282a8u: goto label_3282a8;
        case 0x3282d0u: goto label_3282d0;
        case 0x328330u: goto label_328330;
        case 0x328344u: goto label_328344;
        default: break;
    }

    ctx->pc = 0x328250u;

    // 0x328250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x328250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x328254: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x328254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x328258: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x328258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32825c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32825cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x328260: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x328260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x328264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x328268: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x328268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32826c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x328270: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x328270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328278: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x328278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32827c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328284: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x328284u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x328288: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x328288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32828c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328298: 0x240706f0  addiu       $a3, $zero, 0x6F0
    ctx->pc = 0x328298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x32829c: 0x250881f0  addiu       $t0, $t0, -0x7E10
    ctx->pc = 0x32829cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935024));
    // 0x3282a0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3282A0u;
    SET_GPR_U32(ctx, 31, 0x3282A8u);
    ctx->pc = 0x3282A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282A0u;
    // 0x3282a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3282A0u, 0x3282A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282A8u;
label_3282a8:
    // 0x3282a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3282a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282ac: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3282ACu;
    {
        const bool branch_taken_0x3282ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282ACu;
        // 0x3282b0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282ac) {
            ctx->pc = 0x328350u;
            goto label_328350;
        }
    }
    ctx->pc = 0x3282B4u;
    // 0x3282b4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3282b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282b8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3282b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282bc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3282bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3282c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3282c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3282c8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3282C8u;
    SET_GPR_U32(ctx, 31, 0x3282D0u);
    ctx->pc = 0x3282CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282C8u;
    // 0x3282cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3282C8u, 0x3282D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282D0u;
label_3282d0:
    // 0x3282d0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3282d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3282d4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3282d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3282d8: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3282d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3282dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3282dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3282e0: 0xa600052a  sh          $zero, 0x52A($s0)
    ctx->pc = 0x3282e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x3282e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3282e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3282e8: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x3282e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x3282ec: 0xa2020520  sb          $v0, 0x520($s0)
    ctx->pc = 0x3282ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    // 0x3282f0: 0xa20006e0  sb          $zero, 0x6E0($s0)
    ctx->pc = 0x3282f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1760), (uint8_t)GPR_U32(ctx, 0));
    // 0x3282f4: 0xa21106e1  sb          $s1, 0x6E1($s0)
    ctx->pc = 0x3282f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1761), (uint8_t)GPR_U32(ctx, 17));
    // 0x3282f8: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x3282f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x3282fc: 0xa6000594  sh          $zero, 0x594($s0)
    ctx->pc = 0x3282fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1428), (uint16_t)GPR_U32(ctx, 0));
    // 0x328300: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x328300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x328304: 0xa60005e4  sh          $zero, 0x5E4($s0)
    ctx->pc = 0x328304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x328308: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x328308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x32830c: 0xa6000634  sh          $zero, 0x634($s0)
    ctx->pc = 0x32830cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 0));
    // 0x328310: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x328310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x328314: 0xa6000684  sh          $zero, 0x684($s0)
    ctx->pc = 0x328314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1668), (uint16_t)GPR_U32(ctx, 0));
    // 0x328318: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x328318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x32831c: 0xa60006d4  sh          $zero, 0x6D4($s0)
    ctx->pc = 0x32831cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1748), (uint16_t)GPR_U32(ctx, 0));
    // 0x328320: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x328320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x328324: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x328324u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x328328: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x328328u;
    SET_GPR_U32(ctx, 31, 0x328330u);
    ctx->pc = 0x32832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328328u;
    // 0x32832c: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x328328u, 0x328330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328330u;
label_328330:
    // 0x328330: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x328330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x328334: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x328334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x328338: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x328338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32833c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x32833Cu;
    SET_GPR_U32(ctx, 31, 0x328344u);
    ctx->pc = 0x328340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32833Cu;
    // 0x328340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x32833Cu, 0x328344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328344u;
label_328344:
    // 0x328344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328344u;
    {
        const bool branch_taken_0x328344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328344u;
        // 0x328348: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328344) {
            ctx->pc = 0x328358u;
            goto label_328358;
        }
    }
    ctx->pc = 0x32834Cu;
    // 0x32834c: 0x0  nop
    ctx->pc = 0x32834cu;
    // NOP
label_328350:
    // 0x328350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x328350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328354: 0x0  nop
    ctx->pc = 0x328354u;
    // NOP
label_328358:
    // 0x328358: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x328358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32835c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32835cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x328360: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x328360u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328364: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x328364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x328368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32836c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32836cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328378: 0x3e00008  jr          $ra
    ctx->pc = 0x328378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328378u;
        // 0x32837c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328380u;
}
