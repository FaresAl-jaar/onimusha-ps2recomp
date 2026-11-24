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

// Function: sub_003530D0
// Address: 0x3530d0 - 0x353328
void sub_003530D0_0x3530d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003530D0_0x3530d0");
#endif

    switch (ctx->pc) {
        case 0x353118u: goto label_353118;
        case 0x35316cu: goto label_35316c;
        case 0x353184u: goto label_353184;
        case 0x3531a0u: goto label_3531a0;
        case 0x3531b0u: goto label_3531b0;
        case 0x3531e0u: goto label_3531e0;
        case 0x3531f8u: goto label_3531f8;
        case 0x353204u: goto label_353204;
        case 0x353210u: goto label_353210;
        case 0x353224u: goto label_353224;
        case 0x353258u: goto label_353258;
        case 0x353264u: goto label_353264;
        case 0x353318u: goto label_353318;
        default: break;
    }

    ctx->pc = 0x3530d0u;

    // 0x3530d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3530d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3530d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3530d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3530d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3530d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3530dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3530dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3530e0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3530e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3530e4: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3530E4u;
    {
        const bool branch_taken_0x3530e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3530E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530E4u;
        // 0x3530e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3530e4) {
            ctx->pc = 0x353148u;
            goto label_353148;
        }
    }
    ctx->pc = 0x3530ECu;
    // 0x3530ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3530ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3530f0: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3530F0u;
    {
        const bool branch_taken_0x3530f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3530f0) {
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x3530F8u;
    // 0x3530f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3530F8u;
    {
        const bool branch_taken_0x3530f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3530f8) {
            ctx->pc = 0x353108u;
            goto label_353108;
        }
    }
    ctx->pc = 0x353100u;
    // 0x353100: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x353100u;
    {
        const bool branch_taken_0x353100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353100) {
            ctx->pc = 0x353318u;
            goto label_353318;
        }
    }
    ctx->pc = 0x353108u;
label_353108:
    // 0x353108: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353108u;
    {
        const bool branch_taken_0x353108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x353108) {
            ctx->pc = 0x353118u;
            goto label_353118;
        }
    }
    ctx->pc = 0x353110u;
    // 0x353110: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353110u;
    SET_GPR_U32(ctx, 31, 0x353118u);
    ctx->pc = 0x353114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353110u;
    // 0x353114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353110u, 0x353118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353118u;
label_353118:
    // 0x353118: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x353118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x35311c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x353120: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x353120u;
    {
        const bool branch_taken_0x353120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353120u;
        // 0x353124: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353120) {
            ctx->pc = 0x353318u;
            goto label_353318;
        }
    }
    ctx->pc = 0x353128u;
label_353128:
    // 0x353128: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x35312c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x35312cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x353130: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x353130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x353134: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x353134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x353138: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x353138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x35313c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x35313cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x353140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x353144: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x353144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_353148:
    // 0x353148: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x353148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x35314c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x35314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x353150: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x353150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x353154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x353158: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x353158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35315c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x35315cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353160: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x353160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x353164: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x353164u;
    SET_GPR_U32(ctx, 31, 0x35316Cu);
    ctx->pc = 0x353168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353164u;
    // 0x353168: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x353164u, 0x35316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35316Cu;
label_35316c:
    // 0x35316c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x35316cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x353170: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x353170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353174: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x353174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x353178: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x353178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35317c: 0xc097384  jal         func_25CE10
    ctx->pc = 0x35317Cu;
    SET_GPR_U32(ctx, 31, 0x353184u);
    ctx->pc = 0x353180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35317Cu;
    // 0x353180: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x35317Cu, 0x353184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353184u;
label_353184:
    // 0x353184: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x353184u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x353188: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x353188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35318c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353190: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x353190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x353194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353198: 0xc0c0900  jal         func_302400
    ctx->pc = 0x353198u;
    SET_GPR_U32(ctx, 31, 0x3531A0u);
    ctx->pc = 0x35319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353198u;
    // 0x35319c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x353198u, 0x3531A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531A0u;
label_3531a0:
    // 0x3531a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3531A0u;
    {
        const bool branch_taken_0x3531a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3531A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531A0u;
        // 0x3531a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531a0) {
            ctx->pc = 0x3531B8u;
            goto label_3531b8;
        }
    }
    ctx->pc = 0x3531A8u;
    // 0x3531a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3531A8u;
    SET_GPR_U32(ctx, 31, 0x3531B0u);
    ctx->pc = 0x3531ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3531A8u;
    // 0x3531ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3531A8u, 0x3531B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531B0u;
label_3531b0:
    // 0x3531b0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3531B0u;
    {
        const bool branch_taken_0x3531b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531b0) {
            ctx->pc = 0x353318u;
            goto label_353318;
        }
    }
    ctx->pc = 0x3531B8u;
label_3531b8:
    // 0x3531b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3531b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3531bc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3531bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3531c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3531c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3531c4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3531c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3531c8: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3531c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3531cc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3531ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3531d0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3531d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3531d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3531d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3531d8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3531D8u;
    SET_GPR_U32(ctx, 31, 0x3531E0u);
    ctx->pc = 0x3531DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3531D8u;
    // 0x3531dc: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3531D8u, 0x3531E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531E0u;
label_3531e0:
    // 0x3531e0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3531E0u;
    {
        const bool branch_taken_0x3531e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531e0) {
            ctx->pc = 0x353270u;
            goto label_353270;
        }
    }
    ctx->pc = 0x3531E8u;
    // 0x3531e8: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3531e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3531ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3531ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3531f0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3531F0u;
    SET_GPR_U32(ctx, 31, 0x3531F8u);
    ctx->pc = 0x3531F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3531F0u;
    // 0x3531f4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3531F0u, 0x3531F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531F8u;
label_3531f8:
    // 0x3531f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3531f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3531fc: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3531FCu;
    SET_GPR_U32(ctx, 31, 0x353204u);
    ctx->pc = 0x353200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3531FCu;
    // 0x353200: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3531FCu, 0x353204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353204u;
label_353204:
    // 0x353204: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x353204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353208: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x353208u;
    SET_GPR_U32(ctx, 31, 0x353210u);
    ctx->pc = 0x35320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353208u;
    // 0x35320c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x353208u, 0x353210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353210u;
label_353210:
    // 0x353210: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x353210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x353214: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x353214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x353218: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x353218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x35321c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x35321Cu;
    SET_GPR_U32(ctx, 31, 0x353224u);
    ctx->pc = 0x353220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35321Cu;
    // 0x353220: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x35321Cu, 0x353224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353224u;
label_353224:
    // 0x353224: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x353224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x353228: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x353228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35322c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x35322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x353230: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x353234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353238: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x353238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x35323c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x35323cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x353240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x353240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353244: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35324c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35324cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353250: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x353250u;
    SET_GPR_U32(ctx, 31, 0x353258u);
    ctx->pc = 0x353254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353250u;
    // 0x353254: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x353250u, 0x353258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353258u;
label_353258:
    // 0x353258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35325c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35325Cu;
    SET_GPR_U32(ctx, 31, 0x353264u);
    ctx->pc = 0x353260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35325Cu;
    // 0x353260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35325Cu, 0x353264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353264u;
label_353264:
    // 0x353264: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x353264u;
    {
        const bool branch_taken_0x353264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353264) {
            ctx->pc = 0x353318u;
            goto label_353318;
        }
    }
    ctx->pc = 0x35326Cu;
    // 0x35326c: 0x0  nop
    ctx->pc = 0x35326cu;
    // NOP
label_353270:
    // 0x353270: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x353270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x353274: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x353274u;
    {
        const bool branch_taken_0x353274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353274u;
        // 0x353278: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353274) {
            ctx->pc = 0x353288u;
            goto label_353288;
        }
    }
    ctx->pc = 0x35327Cu;
    // 0x35327c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35327Cu;
    {
        const bool branch_taken_0x35327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35327c) {
            ctx->pc = 0x353308u;
            goto label_353308;
        }
    }
    ctx->pc = 0x353284u;
    // 0x353284: 0x0  nop
    ctx->pc = 0x353284u;
    // NOP
label_353288:
    // 0x353288: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x353288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35328c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x353290: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x353290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x353294: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x353294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x353298: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x353298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x35329c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35329Cu;
    {
        const bool branch_taken_0x35329c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35329c) {
            ctx->pc = 0x3532D8u;
            goto label_3532d8;
        }
    }
    ctx->pc = 0x3532A4u;
    // 0x3532a4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3532a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3532a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3532a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3532ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3532ACu;
    {
        const bool branch_taken_0x3532ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3532B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532ACu;
        // 0x3532b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532ac) {
            ctx->pc = 0x353300u;
            goto label_353300;
        }
    }
    ctx->pc = 0x3532B4u;
    // 0x3532b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3532b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3532b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3532b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3532bc: 0x0  nop
    ctx->pc = 0x3532bcu;
    // NOP
    // 0x3532c0: 0x0  nop
    ctx->pc = 0x3532c0u;
    // NOP
    // 0x3532c4: 0x2010  mfhi        $a0
    ctx->pc = 0x3532c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3532c8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3532c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3532cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3532CCu;
    {
        const bool branch_taken_0x3532cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532CCu;
        // 0x3532d0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532cc) {
            ctx->pc = 0x353300u;
            goto label_353300;
        }
    }
    ctx->pc = 0x3532D4u;
    // 0x3532d4: 0x0  nop
    ctx->pc = 0x3532d4u;
    // NOP
label_3532d8:
    // 0x3532d8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3532d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3532dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3532dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3532e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3532E0u;
    {
        const bool branch_taken_0x3532e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3532e0) {
            ctx->pc = 0x353300u;
            goto label_353300;
        }
    }
    ctx->pc = 0x3532E8u;
    // 0x3532e8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3532e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3532ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3532ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3532f0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3532f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3532f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3532F4u;
    {
        const bool branch_taken_0x3532f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3532F4u;
        // 0x3532f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532f4) {
            ctx->pc = 0x353308u;
            goto label_353308;
        }
    }
    ctx->pc = 0x3532FCu;
    // 0x3532fc: 0x0  nop
    ctx->pc = 0x3532fcu;
    // NOP
label_353300:
    // 0x353300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353304: 0x0  nop
    ctx->pc = 0x353304u;
    // NOP
label_353308:
    // 0x353308: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353308u;
    {
        const bool branch_taken_0x353308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353308u;
        // 0x35330c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353308) {
            ctx->pc = 0x353318u;
            goto label_353318;
        }
    }
    ctx->pc = 0x353310u;
    // 0x353310: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x353310u;
    SET_GPR_U32(ctx, 31, 0x353318u);
    ctx->pc = 0x353314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353310u;
    // 0x353314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x353310u, 0x353318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353318u;
label_353318:
    // 0x353318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35331c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35331cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353320: 0x3e00008  jr          $ra
    ctx->pc = 0x353320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353320u;
        // 0x353324: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353328u;
}
