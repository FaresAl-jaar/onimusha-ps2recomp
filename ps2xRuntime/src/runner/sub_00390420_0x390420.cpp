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

// Function: sub_00390420
// Address: 0x390420 - 0x39059c
void sub_00390420_0x390420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390420_0x390420");
#endif

    switch (ctx->pc) {
        case 0x390480u: goto label_390480;
        case 0x3904a8u: goto label_3904a8;
        case 0x3904ccu: goto label_3904cc;
        case 0x390558u: goto label_390558;
        case 0x390560u: goto label_390560;
        default: break;
    }

    ctx->pc = 0x390420u;

    // 0x390420: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x390420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x390424: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x390424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x390428: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x390428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x39042c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x390430: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x390430u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390434: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x390434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x390438: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x390438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39043c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x390440: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x390440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390444: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x390444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x390448: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x390448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39044c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x390450: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x390450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x390458: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x390458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39045c: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x39045cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x390460: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x390460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39046c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39046cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390470: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x390470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x390474: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x390474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x390478: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x390478u;
    SET_GPR_U32(ctx, 31, 0x390480u);
    ctx->pc = 0x39047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390478u;
    // 0x39047c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x390478u, 0x390480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390480u;
label_390480:
    // 0x390480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390484: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x390484u;
    {
        const bool branch_taken_0x390484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x390488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390484u;
        // 0x390488: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390484) {
            ctx->pc = 0x390568u;
            goto label_390568;
        }
    }
    ctx->pc = 0x39048Cu;
    // 0x39048c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x39048cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390490: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x390490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390494: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x390494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39049c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x39049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3904a0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3904A0u;
    SET_GPR_U32(ctx, 31, 0x3904A8u);
    ctx->pc = 0x3904A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3904A0u;
    // 0x3904a4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3904A0u, 0x3904A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3904A8u;
label_3904a8:
    // 0x3904a8: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3904a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3904ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3904acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3904b0: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3904b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3904b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3904b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3904b8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3904b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3904bc: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3904bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3904c0: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3904c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3904c4: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3904C4u;
    SET_GPR_U32(ctx, 31, 0x3904CCu);
    ctx->pc = 0x3904C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3904C4u;
    // 0x3904c8: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3904C4u, 0x3904CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3904CCu;
label_3904cc:
    // 0x3904cc: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x3904ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x3904d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3904d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3904d4: 0xae020558  sw          $v0, 0x558($s0)
    ctx->pc = 0x3904d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 2));
    // 0x3904d8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3904d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3904dc: 0xa217055c  sb          $s7, 0x55C($s0)
    ctx->pc = 0x3904dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1372), (uint8_t)GPR_U32(ctx, 23));
    // 0x3904e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3904e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3904e4: 0xa211055d  sb          $s1, 0x55D($s0)
    ctx->pc = 0x3904e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1373), (uint8_t)GPR_U32(ctx, 17));
    // 0x3904e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3904e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3904ec: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3904ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3904f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3904f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3904f4: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x3904f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x3904f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3904f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3904fc: 0xa2000568  sb          $zero, 0x568($s0)
    ctx->pc = 0x3904fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 0));
    // 0x390500: 0x24422214  addiu       $v0, $v0, 0x2214
    ctx->pc = 0x390500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8724));
    // 0x390504: 0xa2000569  sb          $zero, 0x569($s0)
    ctx->pc = 0x390504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 0));
    // 0x390508: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x390508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39050c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390510: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x390510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x390514: 0x87838c4c  lh          $v1, -0x73B4($gp)
    ctx->pc = 0x390514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937676)));
    // 0x390518: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x390518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x39051c: 0xa603055e  sh          $v1, 0x55E($s0)
    ctx->pc = 0x39051cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1374), (uint16_t)GPR_U32(ctx, 3));
    // 0x390520: 0x87838c4c  lh          $v1, -0x73B4($gp)
    ctx->pc = 0x390520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937676)));
    // 0x390524: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x390524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x390528: 0xa7838c4c  sh          $v1, -0x73B4($gp)
    ctx->pc = 0x390528u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937676), (uint16_t)GPR_U32(ctx, 3));
    // 0x39052c: 0x87838c4c  lh          $v1, -0x73B4($gp)
    ctx->pc = 0x39052cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937676)));
    // 0x390530: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x390530u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x390534: 0x0  nop
    ctx->pc = 0x390534u;
    // NOP
    // 0x390538: 0x0  nop
    ctx->pc = 0x390538u;
    // NOP
    // 0x39053c: 0x1810  mfhi        $v1
    ctx->pc = 0x39053cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x390540: 0xa7838c4c  sh          $v1, -0x73B4($gp)
    ctx->pc = 0x390540u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937676), (uint16_t)GPR_U32(ctx, 3));
    // 0x390544: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x390544u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x390548: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x390548u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x39054c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x39054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x390550: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x390550u;
    SET_GPR_U32(ctx, 31, 0x390558u);
    ctx->pc = 0x390554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390550u;
    // 0x390554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x390550u, 0x390558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390558u;
label_390558:
    // 0x390558: 0xc0e4040  jal         func_390100
    ctx->pc = 0x390558u;
    SET_GPR_U32(ctx, 31, 0x390560u);
    ctx->pc = 0x39055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390558u;
    // 0x39055c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390100u, 0x390558u, 0x390560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390560u;
label_390560:
    // 0x390560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390560u;
    {
        const bool branch_taken_0x390560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390560u;
        // 0x390564: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390560) {
            ctx->pc = 0x390570u;
            goto label_390570;
        }
    }
    ctx->pc = 0x390568u;
label_390568:
    // 0x390568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x390568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39056c: 0x0  nop
    ctx->pc = 0x39056cu;
    // NOP
label_390570:
    // 0x390570: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x390570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x390574: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x390574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x390578: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x390578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39057c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39057cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390580: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x390580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x390584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39058c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39058cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390594: 0x3e00008  jr          $ra
    ctx->pc = 0x390594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390594u;
        // 0x390598: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39059Cu;
}
