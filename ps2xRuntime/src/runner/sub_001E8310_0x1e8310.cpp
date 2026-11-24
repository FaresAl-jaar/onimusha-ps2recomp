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

// Function: sub_001E8310
// Address: 0x1e8310 - 0x1e83e4
void sub_001E8310_0x1e8310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8310_0x1e8310");
#endif

    switch (ctx->pc) {
        case 0x1e8310u: goto label_1e8310;
        case 0x1e8314u: goto label_1e8314;
        case 0x1e8318u: goto label_1e8318;
        case 0x1e831cu: goto label_1e831c;
        case 0x1e8320u: goto label_1e8320;
        case 0x1e8324u: goto label_1e8324;
        case 0x1e8328u: goto label_1e8328;
        case 0x1e832cu: goto label_1e832c;
        case 0x1e8330u: goto label_1e8330;
        case 0x1e8334u: goto label_1e8334;
        case 0x1e8338u: goto label_1e8338;
        case 0x1e833cu: goto label_1e833c;
        case 0x1e8340u: goto label_1e8340;
        case 0x1e8344u: goto label_1e8344;
        case 0x1e8348u: goto label_1e8348;
        case 0x1e834cu: goto label_1e834c;
        case 0x1e8350u: goto label_1e8350;
        case 0x1e8354u: goto label_1e8354;
        case 0x1e8358u: goto label_1e8358;
        case 0x1e835cu: goto label_1e835c;
        case 0x1e8360u: goto label_1e8360;
        case 0x1e8364u: goto label_1e8364;
        case 0x1e8368u: goto label_1e8368;
        case 0x1e836cu: goto label_1e836c;
        case 0x1e8370u: goto label_1e8370;
        case 0x1e8374u: goto label_1e8374;
        case 0x1e8378u: goto label_1e8378;
        case 0x1e837cu: goto label_1e837c;
        case 0x1e8380u: goto label_1e8380;
        case 0x1e8384u: goto label_1e8384;
        case 0x1e8388u: goto label_1e8388;
        case 0x1e838cu: goto label_1e838c;
        case 0x1e8390u: goto label_1e8390;
        case 0x1e8394u: goto label_1e8394;
        case 0x1e8398u: goto label_1e8398;
        case 0x1e839cu: goto label_1e839c;
        case 0x1e83a0u: goto label_1e83a0;
        case 0x1e83a4u: goto label_1e83a4;
        case 0x1e83a8u: goto label_1e83a8;
        case 0x1e83acu: goto label_1e83ac;
        case 0x1e83b0u: goto label_1e83b0;
        case 0x1e83b4u: goto label_1e83b4;
        case 0x1e83b8u: goto label_1e83b8;
        case 0x1e83bcu: goto label_1e83bc;
        case 0x1e83c0u: goto label_1e83c0;
        case 0x1e83c4u: goto label_1e83c4;
        case 0x1e83c8u: goto label_1e83c8;
        case 0x1e83ccu: goto label_1e83cc;
        case 0x1e83d0u: goto label_1e83d0;
        case 0x1e83d4u: goto label_1e83d4;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e83dcu: goto label_1e83dc;
        case 0x1e83e0u: goto label_1e83e0;
        default: break;
    }

    ctx->pc = 0x1e8310u;

label_1e8310:
    // 0x1e8310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e8314:
    // 0x1e8314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e8318:
    // 0x1e8318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e831c:
    // 0x1e831c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8320:
    // 0x1e8320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8324:
    // 0x1e8324: 0xc078684  jal         func_1E1A10
label_1e8328:
    if (ctx->pc == 0x1E8328u) {
        ctx->pc = 0x1E8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8324u;
        // 0x1e8328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E832Cu;
        goto label_1e832c;
    }
    ctx->pc = 0x1E8324u;
    SET_GPR_U32(ctx, 31, 0x1E832Cu);
    ctx->pc = 0x1E8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8324u;
    // 0x1e8328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E8324u, 0x1E832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E832Cu;
label_1e832c:
    // 0x1e832c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e8330:
    // 0x1e8330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8334:
    // 0x1e8334: 0xc076bec  jal         func_1DAFB0
label_1e8338:
    if (ctx->pc == 0x1E8338u) {
        ctx->pc = 0x1E8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8334u;
        // 0x1e8338: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E833Cu;
        goto label_1e833c;
    }
    ctx->pc = 0x1E8334u;
    SET_GPR_U32(ctx, 31, 0x1E833Cu);
    ctx->pc = 0x1E8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8334u;
    // 0x1e8338: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E8334u, 0x1E833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E833Cu;
label_1e833c:
    // 0x1e833c: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x1e833cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1e8340:
    // 0x1e8340: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e8340u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e8344:
    // 0x1e8344: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1e8344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8348:
    // 0x1e8348: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1e8348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1e834c:
    // 0x1e834c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1e834cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1e8350:
    // 0x1e8350: 0x9205003a  lbu         $a1, 0x3A($s0)
    ctx->pc = 0x1e8350u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_1e8354:
    // 0x1e8354: 0x9206003b  lbu         $a2, 0x3B($s0)
    ctx->pc = 0x1e8354u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_1e8358:
    // 0x1e8358: 0xc074350  jal         func_1D0D40
label_1e835c:
    if (ctx->pc == 0x1E835Cu) {
        ctx->pc = 0x1E835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8358u;
        // 0x1e835c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8360u;
        goto label_1e8360;
    }
    ctx->pc = 0x1E8358u;
    SET_GPR_U32(ctx, 31, 0x1E8360u);
    ctx->pc = 0x1E835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8358u;
    // 0x1e835c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E8358u, 0x1E8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8360u;
label_1e8360:
    // 0x1e8360: 0x9205003c  lbu         $a1, 0x3C($s0)
    ctx->pc = 0x1e8360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e8364:
    // 0x1e8364: 0x9206003d  lbu         $a2, 0x3D($s0)
    ctx->pc = 0x1e8364u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1e8368:
    // 0x1e8368: 0xc074378  jal         func_1D0DE0
label_1e836c:
    if (ctx->pc == 0x1E836Cu) {
        ctx->pc = 0x1E836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8368u;
        // 0x1e836c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8370u;
        goto label_1e8370;
    }
    ctx->pc = 0x1E8368u;
    SET_GPR_U32(ctx, 31, 0x1E8370u);
    ctx->pc = 0x1E836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8368u;
    // 0x1e836c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E8368u, 0x1E8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8370u;
label_1e8370:
    // 0x1e8370: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1e8370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1e8374:
    // 0x1e8374: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x1e8374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1e8378:
    // 0x1e8378: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x1e8378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e837c:
    // 0x1e837c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8380:
    // 0x1e8380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e8384:
    // 0x1e8384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e8384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e8388:
    // 0x1e8388: 0xc0741a4  jal         func_1D0690
label_1e838c:
    if (ctx->pc == 0x1E838Cu) {
        ctx->pc = 0x1E838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8388u;
        // 0x1e838c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8390u;
        goto label_1e8390;
    }
    ctx->pc = 0x1E8388u;
    SET_GPR_U32(ctx, 31, 0x1E8390u);
    ctx->pc = 0x1E838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8388u;
    // 0x1e838c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E8388u, 0x1E8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8390u;
label_1e8390:
    // 0x1e8390: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1e8390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1e8394:
    // 0x1e8394: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1e8394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1e8398:
    // 0x1e8398: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1e839c:
    if (ctx->pc == 0x1E839Cu) {
        ctx->pc = 0x1E83A0u;
        goto label_1e83a0;
    }
    ctx->pc = 0x1E8398u;
    {
        const bool branch_taken_0x1e8398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8398) {
            ctx->pc = 0x1E83B8u;
            goto label_1e83b8;
        }
    }
    ctx->pc = 0x1E83A0u;
label_1e83a0:
    // 0x1e83a0: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e83a4:
    // 0x1e83a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e83a8:
    // 0x1e83a8: 0x320f809  jalr        $t9
label_1e83ac:
    if (ctx->pc == 0x1E83ACu) {
        ctx->pc = 0x1E83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83A8u;
        // 0x1e83ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83B0u;
        goto label_1e83b0;
    }
    ctx->pc = 0x1E83A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E83B0u);
        ctx->pc = 0x1E83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83A8u;
        // 0x1e83ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83A8u, 0x1E83B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E83B0u;
label_1e83b0:
    // 0x1e83b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e83b4:
    if (ctx->pc == 0x1E83B4u) {
        ctx->pc = 0x1E83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B0u;
        // 0x1e83b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83B8u;
        goto label_1e83b8;
    }
    ctx->pc = 0x1E83B0u;
    {
        const bool branch_taken_0x1e83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B0u;
        // 0x1e83b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83b0) {
            ctx->pc = 0x1E83D0u;
            goto label_1e83d0;
        }
    }
    ctx->pc = 0x1E83B8u;
label_1e83b8:
    // 0x1e83b8: 0x92060034  lbu         $a2, 0x34($s0)
    ctx->pc = 0x1e83b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e83bc:
    // 0x1e83bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e83c0:
    // 0x1e83c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e83c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e83c4:
    // 0x1e83c4: 0xc074ea4  jal         func_1D3A90
label_1e83c8:
    if (ctx->pc == 0x1E83C8u) {
        ctx->pc = 0x1E83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83C4u;
        // 0x1e83c8: 0x92050033  lbu         $a1, 0x33($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83CCu;
        goto label_1e83cc;
    }
    ctx->pc = 0x1E83C4u;
    SET_GPR_U32(ctx, 31, 0x1E83CCu);
    ctx->pc = 0x1E83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83C4u;
    // 0x1e83c8: 0x92050033  lbu         $a1, 0x33($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3A90u, 0x1E83C4u, 0x1E83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83CCu;
label_1e83cc:
    // 0x1e83cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e83d0:
    // 0x1e83d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e83d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e83d4:
    // 0x1e83d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e83d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e83d8:
    // 0x1e83d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e83d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e83dc:
    // 0x1e83dc: 0x3e00008  jr          $ra
label_1e83e0:
    if (ctx->pc == 0x1E83E0u) {
        ctx->pc = 0x1E83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83DCu;
        // 0x1e83e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83E4u;
        goto label_fallthrough_0x1e83dc;
    }
    ctx->pc = 0x1E83DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83DCu;
        // 0x1e83e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e83dc:
    ctx->pc = 0x1E83E4u;
}
