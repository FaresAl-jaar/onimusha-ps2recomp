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

// Function: sub_00375400
// Address: 0x375400 - 0x37560c
void sub_00375400_0x375400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375400_0x375400");
#endif

    switch (ctx->pc) {
        case 0x375400u: goto label_375400;
        case 0x375404u: goto label_375404;
        case 0x375408u: goto label_375408;
        case 0x37540cu: goto label_37540c;
        case 0x375410u: goto label_375410;
        case 0x375414u: goto label_375414;
        case 0x375418u: goto label_375418;
        case 0x37541cu: goto label_37541c;
        case 0x375420u: goto label_375420;
        case 0x375424u: goto label_375424;
        case 0x375428u: goto label_375428;
        case 0x37542cu: goto label_37542c;
        case 0x375430u: goto label_375430;
        case 0x375434u: goto label_375434;
        case 0x375438u: goto label_375438;
        case 0x37543cu: goto label_37543c;
        case 0x375440u: goto label_375440;
        case 0x375444u: goto label_375444;
        case 0x375448u: goto label_375448;
        case 0x37544cu: goto label_37544c;
        case 0x375450u: goto label_375450;
        case 0x375454u: goto label_375454;
        case 0x375458u: goto label_375458;
        case 0x37545cu: goto label_37545c;
        case 0x375460u: goto label_375460;
        case 0x375464u: goto label_375464;
        case 0x375468u: goto label_375468;
        case 0x37546cu: goto label_37546c;
        case 0x375470u: goto label_375470;
        case 0x375474u: goto label_375474;
        case 0x375478u: goto label_375478;
        case 0x37547cu: goto label_37547c;
        case 0x375480u: goto label_375480;
        case 0x375484u: goto label_375484;
        case 0x375488u: goto label_375488;
        case 0x37548cu: goto label_37548c;
        case 0x375490u: goto label_375490;
        case 0x375494u: goto label_375494;
        case 0x375498u: goto label_375498;
        case 0x37549cu: goto label_37549c;
        case 0x3754a0u: goto label_3754a0;
        case 0x3754a4u: goto label_3754a4;
        case 0x3754a8u: goto label_3754a8;
        case 0x3754acu: goto label_3754ac;
        case 0x3754b0u: goto label_3754b0;
        case 0x3754b4u: goto label_3754b4;
        case 0x3754b8u: goto label_3754b8;
        case 0x3754bcu: goto label_3754bc;
        case 0x3754c0u: goto label_3754c0;
        case 0x3754c4u: goto label_3754c4;
        case 0x3754c8u: goto label_3754c8;
        case 0x3754ccu: goto label_3754cc;
        case 0x3754d0u: goto label_3754d0;
        case 0x3754d4u: goto label_3754d4;
        case 0x3754d8u: goto label_3754d8;
        case 0x3754dcu: goto label_3754dc;
        case 0x3754e0u: goto label_3754e0;
        case 0x3754e4u: goto label_3754e4;
        case 0x3754e8u: goto label_3754e8;
        case 0x3754ecu: goto label_3754ec;
        case 0x3754f0u: goto label_3754f0;
        case 0x3754f4u: goto label_3754f4;
        case 0x3754f8u: goto label_3754f8;
        case 0x3754fcu: goto label_3754fc;
        case 0x375500u: goto label_375500;
        case 0x375504u: goto label_375504;
        case 0x375508u: goto label_375508;
        case 0x37550cu: goto label_37550c;
        case 0x375510u: goto label_375510;
        case 0x375514u: goto label_375514;
        case 0x375518u: goto label_375518;
        case 0x37551cu: goto label_37551c;
        case 0x375520u: goto label_375520;
        case 0x375524u: goto label_375524;
        case 0x375528u: goto label_375528;
        case 0x37552cu: goto label_37552c;
        case 0x375530u: goto label_375530;
        case 0x375534u: goto label_375534;
        case 0x375538u: goto label_375538;
        case 0x37553cu: goto label_37553c;
        case 0x375540u: goto label_375540;
        case 0x375544u: goto label_375544;
        case 0x375548u: goto label_375548;
        case 0x37554cu: goto label_37554c;
        case 0x375550u: goto label_375550;
        case 0x375554u: goto label_375554;
        case 0x375558u: goto label_375558;
        case 0x37555cu: goto label_37555c;
        case 0x375560u: goto label_375560;
        case 0x375564u: goto label_375564;
        case 0x375568u: goto label_375568;
        case 0x37556cu: goto label_37556c;
        case 0x375570u: goto label_375570;
        case 0x375574u: goto label_375574;
        case 0x375578u: goto label_375578;
        case 0x37557cu: goto label_37557c;
        case 0x375580u: goto label_375580;
        case 0x375584u: goto label_375584;
        case 0x375588u: goto label_375588;
        case 0x37558cu: goto label_37558c;
        case 0x375590u: goto label_375590;
        case 0x375594u: goto label_375594;
        case 0x375598u: goto label_375598;
        case 0x37559cu: goto label_37559c;
        case 0x3755a0u: goto label_3755a0;
        case 0x3755a4u: goto label_3755a4;
        case 0x3755a8u: goto label_3755a8;
        case 0x3755acu: goto label_3755ac;
        case 0x3755b0u: goto label_3755b0;
        case 0x3755b4u: goto label_3755b4;
        case 0x3755b8u: goto label_3755b8;
        case 0x3755bcu: goto label_3755bc;
        case 0x3755c0u: goto label_3755c0;
        case 0x3755c4u: goto label_3755c4;
        case 0x3755c8u: goto label_3755c8;
        case 0x3755ccu: goto label_3755cc;
        case 0x3755d0u: goto label_3755d0;
        case 0x3755d4u: goto label_3755d4;
        case 0x3755d8u: goto label_3755d8;
        case 0x3755dcu: goto label_3755dc;
        case 0x3755e0u: goto label_3755e0;
        case 0x3755e4u: goto label_3755e4;
        case 0x3755e8u: goto label_3755e8;
        case 0x3755ecu: goto label_3755ec;
        case 0x3755f0u: goto label_3755f0;
        case 0x3755f4u: goto label_3755f4;
        case 0x3755f8u: goto label_3755f8;
        case 0x3755fcu: goto label_3755fc;
        case 0x375600u: goto label_375600;
        case 0x375604u: goto label_375604;
        case 0x375608u: goto label_375608;
        default: break;
    }

    ctx->pc = 0x375400u;

label_375400:
    // 0x375400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_375404:
    // 0x375404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x375404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375408:
    // 0x375408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x375408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37540c:
    // 0x37540c: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x37540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_375410:
    // 0x375410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_375414:
    // 0x375414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_375418:
    // 0x375418: 0xc7808380  lwc1        $f0, -0x7C80($gp)
    ctx->pc = 0x375418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37541c:
    // 0x37541c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x37541cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_375420:
    // 0x375420: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x375420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_375424:
    // 0x375424: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x375424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_375428:
    // 0x375428: 0x9045003c  lbu         $a1, 0x3C($v0)
    ctx->pc = 0x375428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
label_37542c:
    // 0x37542c: 0xc09ffb0  jal         func_27FEC0
label_375430:
    if (ctx->pc == 0x375430u) {
        ctx->pc = 0x375430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37542Cu;
        // 0x375430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375434u;
        goto label_375434;
    }
    ctx->pc = 0x37542Cu;
    SET_GPR_U32(ctx, 31, 0x375434u);
    ctx->pc = 0x375430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37542Cu;
    // 0x375430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x37542Cu, 0x375434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375434u;
label_375434:
    // 0x375434: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x375434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
label_375438:
    // 0x375438: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37543c:
    // 0x37543c: 0x10830064  beq         $a0, $v1, . + 4 + (0x64 << 2)
label_375440:
    if (ctx->pc == 0x375440u) {
        ctx->pc = 0x375440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37543Cu;
        // 0x375440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375444u;
        goto label_375444;
    }
    ctx->pc = 0x37543Cu;
    {
        const bool branch_taken_0x37543c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x375440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37543Cu;
        // 0x375440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37543c) {
            ctx->pc = 0x3755D0u;
            goto label_3755d0;
        }
    }
    ctx->pc = 0x375444u;
label_375444:
    // 0x375444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375448:
    // 0x375448: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
label_37544c:
    if (ctx->pc == 0x37544Cu) {
        ctx->pc = 0x37544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375448u;
        // 0x37544c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375450u;
        goto label_375450;
    }
    ctx->pc = 0x375448u;
    {
        const bool branch_taken_0x375448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375448u;
        // 0x37544c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375448) {
            ctx->pc = 0x375568u;
            goto label_375568;
        }
    }
    ctx->pc = 0x375450u;
label_375450:
    // 0x375450: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_375454:
    if (ctx->pc == 0x375454u) {
        ctx->pc = 0x375458u;
        goto label_375458;
    }
    ctx->pc = 0x375450u;
    {
        const bool branch_taken_0x375450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375450) {
            ctx->pc = 0x3754A0u;
            goto label_3754a0;
        }
    }
    ctx->pc = 0x375458u;
label_375458:
    // 0x375458: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37545c:
    if (ctx->pc == 0x37545Cu) {
        ctx->pc = 0x375460u;
        goto label_375460;
    }
    ctx->pc = 0x375458u;
    {
        const bool branch_taken_0x375458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375458) {
            ctx->pc = 0x375468u;
            goto label_375468;
        }
    }
    ctx->pc = 0x375460u;
label_375460:
    // 0x375460: 0x10000065  b           . + 4 + (0x65 << 2)
label_375464:
    if (ctx->pc == 0x375464u) {
        ctx->pc = 0x375468u;
        goto label_375468;
    }
    ctx->pc = 0x375460u;
    {
        const bool branch_taken_0x375460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375460) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x375468u;
label_375468:
    // 0x375468: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x375468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_37546c:
    // 0x37546c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375470:
    // 0x375470: 0xc096968  jal         func_25A5A0
label_375474:
    if (ctx->pc == 0x375474u) {
        ctx->pc = 0x375474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375470u;
        // 0x375474: 0xc62d07a4  lwc1        $f13, 0x7A4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x375478u;
        goto label_375478;
    }
    ctx->pc = 0x375470u;
    SET_GPR_U32(ctx, 31, 0x375478u);
    ctx->pc = 0x375474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375470u;
    // 0x375474: 0xc62d07a4  lwc1        $f13, 0x7A4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x375470u, 0x375478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375478u;
label_375478:
    // 0x375478: 0xe62007a4  swc1        $f0, 0x7A4($s1)
    ctx->pc = 0x375478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1956), bits); }
label_37547c:
    // 0x37547c: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x37547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_375480:
    // 0x375480: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x375480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_375484:
    // 0x375484: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x375484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_375488:
    // 0x375488: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x375488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_37548c:
    // 0x37548c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_375490:
    // 0x375490: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x375490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_375494:
    // 0x375494: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x375494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_375498:
    // 0x375498: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x375498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_37549c:
    // 0x37549c: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37549cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3754a0:
    // 0x3754a0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3754a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_3754a4:
    // 0x3754a4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3754a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3754a8:
    // 0x3754a8: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x3754a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
label_3754ac:
    // 0x3754ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3754acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3754b0:
    // 0x3754b0: 0xc0414dc  jal         func_105370
label_3754b4:
    if (ctx->pc == 0x3754B4u) {
        ctx->pc = 0x3754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754B0u;
        // 0x3754b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3754B8u;
        goto label_3754b8;
    }
    ctx->pc = 0x3754B0u;
    SET_GPR_U32(ctx, 31, 0x3754B8u);
    ctx->pc = 0x3754B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3754B0u;
    // 0x3754b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3754B0u, 0x3754B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754B8u;
label_3754b8:
    // 0x3754b8: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x3754b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_3754bc:
    // 0x3754bc: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_3754c0:
    if (ctx->pc == 0x3754C0u) {
        ctx->pc = 0x3754C4u;
        goto label_3754c4;
    }
    ctx->pc = 0x3754BCu;
    {
        const bool branch_taken_0x3754bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3754bc) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x3754C4u;
label_3754c4:
    // 0x3754c4: 0xa2202b60  sb          $zero, 0x2B60($s1)
    ctx->pc = 0x3754c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11104), (uint8_t)GPR_U32(ctx, 0));
label_3754c8:
    // 0x3754c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3754c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3754cc:
    // 0x3754cc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3754ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3754d0:
    // 0x3754d0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3754d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_3754d4:
    // 0x3754d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3754d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3754d8:
    // 0x3754d8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3754d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3754dc:
    // 0x3754dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3754dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3754e0:
    // 0x3754e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3754e4:
    // 0x3754e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3754e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3754e8:
    // 0x3754e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3754e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3754ec:
    // 0x3754ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3754ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3754f0:
    // 0x3754f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3754f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3754f4:
    // 0x3754f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3754f8:
    if (ctx->pc == 0x3754F8u) {
        ctx->pc = 0x3754FCu;
        goto label_3754fc;
    }
    ctx->pc = 0x3754F4u;
    {
        const bool branch_taken_0x3754f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3754f4) {
            ctx->pc = 0x37550Cu;
            goto label_37550c;
        }
    }
    ctx->pc = 0x3754FCu;
label_3754fc:
    // 0x3754fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3754fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375500:
    // 0x375500: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x375500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_375504:
    // 0x375504: 0x10000008  b           . + 4 + (0x8 << 2)
label_375508:
    if (ctx->pc == 0x375508u) {
        ctx->pc = 0x375508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375504u;
        // 0x375508: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37550Cu;
        goto label_37550c;
    }
    ctx->pc = 0x375504u;
    {
        const bool branch_taken_0x375504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375504u;
        // 0x375508: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x375504) {
            ctx->pc = 0x375528u;
            goto label_375528;
        }
    }
    ctx->pc = 0x37550Cu;
label_37550c:
    // 0x37550c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37550cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_375510:
    // 0x375510: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x375510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_375514:
    // 0x375514: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x375514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_375518:
    // 0x375518: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x375518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_37551c:
    // 0x37551c: 0x0  nop
    ctx->pc = 0x37551cu;
    // NOP
label_375520:
    // 0x375520: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x375520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_375524:
    // 0x375524: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x375524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_375528:
    // 0x375528: 0xc0a6b14  jal         func_29AC50
label_37552c:
    if (ctx->pc == 0x37552Cu) {
        ctx->pc = 0x37552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375528u;
        // 0x37552c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375530u;
        goto label_375530;
    }
    ctx->pc = 0x375528u;
    SET_GPR_U32(ctx, 31, 0x375530u);
    ctx->pc = 0x37552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375528u;
    // 0x37552c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x375528u, 0x375530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375530u;
label_375530:
    // 0x375530: 0x9226083b  lbu         $a2, 0x83B($s1)
    ctx->pc = 0x375530u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2107)));
label_375534:
    // 0x375534: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375538:
    // 0x375538: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x375538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_37553c:
    // 0x37553c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x37553cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_375540:
    // 0x375540: 0xa226083c  sb          $a2, 0x83C($s1)
    ctx->pc = 0x375540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2108), (uint8_t)GPR_U32(ctx, 6));
label_375544:
    // 0x375544: 0xa225083b  sb          $a1, 0x83B($s1)
    ctx->pc = 0x375544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2107), (uint8_t)GPR_U32(ctx, 5));
label_375548:
    // 0x375548: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x375548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_37554c:
    // 0x37554c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x37554cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_375550:
    // 0x375550: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x375550u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_375554:
    // 0x375554: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x375554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_375558:
    // 0x375558: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x375558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_37555c:
    // 0x37555c: 0x10000026  b           . + 4 + (0x26 << 2)
label_375560:
    if (ctx->pc == 0x375560u) {
        ctx->pc = 0x375560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37555Cu;
        // 0x375560: 0xa2250821  sb          $a1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375564u;
        goto label_375564;
    }
    ctx->pc = 0x37555Cu;
    {
        const bool branch_taken_0x37555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37555Cu;
        // 0x375560: 0xa2250821  sb          $a1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37555c) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x375564u;
label_375564:
    // 0x375564: 0x0  nop
    ctx->pc = 0x375564u;
    // NOP
label_375568:
    // 0x375568: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
label_37556c:
    if (ctx->pc == 0x37556Cu) {
        ctx->pc = 0x375570u;
        goto label_375570;
    }
    ctx->pc = 0x375568u;
    {
        const bool branch_taken_0x375568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x375568) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x375570u;
label_375570:
    // 0x375570: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x375570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_375574:
    // 0x375574: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_375578:
    if (ctx->pc == 0x375578u) {
        ctx->pc = 0x37557Cu;
        goto label_37557c;
    }
    ctx->pc = 0x375574u;
    {
        const bool branch_taken_0x375574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375574) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x37557Cu;
label_37557c:
    // 0x37557c: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x37557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_375580:
    // 0x375580: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x375580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_375584:
    // 0x375584: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_375588:
    if (ctx->pc == 0x375588u) {
        ctx->pc = 0x37558Cu;
        goto label_37558c;
    }
    ctx->pc = 0x375584u;
    {
        const bool branch_taken_0x375584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x375584) {
            ctx->pc = 0x3755C0u;
            goto label_3755c0;
        }
    }
    ctx->pc = 0x37558Cu;
label_37558c:
    // 0x37558c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x37558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_375590:
    // 0x375590: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x375590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_375594:
    // 0x375594: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_375598:
    if (ctx->pc == 0x375598u) {
        ctx->pc = 0x37559Cu;
        goto label_37559c;
    }
    ctx->pc = 0x375594u;
    {
        const bool branch_taken_0x375594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x375594) {
            ctx->pc = 0x3755C0u;
            goto label_3755c0;
        }
    }
    ctx->pc = 0x37559Cu;
label_37559c:
    // 0x37559c: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x37559cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3755a0:
    // 0x3755a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3755a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3755a4:
    // 0x3755a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3755a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3755a8:
    // 0x3755a8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3755a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3755ac:
    // 0x3755ac: 0x320f809  jalr        $t9
label_3755b0:
    if (ctx->pc == 0x3755B0u) {
        ctx->pc = 0x3755B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755ACu;
        // 0x3755b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3755B4u;
        goto label_3755b4;
    }
    ctx->pc = 0x3755ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3755B4u);
        ctx->pc = 0x3755B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755ACu;
        // 0x3755b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3755ACu, 0x3755B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3755B4u;
label_3755b4:
    // 0x3755b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3755b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3755b8:
    // 0x3755b8: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x3755b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
label_3755bc:
    // 0x3755bc: 0x0  nop
    ctx->pc = 0x3755bcu;
    // NOP
label_3755c0:
    // 0x3755c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3755c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3755c4:
    // 0x3755c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3755c8:
    if (ctx->pc == 0x3755C8u) {
        ctx->pc = 0x3755C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755C4u;
        // 0x3755c8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3755CCu;
        goto label_3755cc;
    }
    ctx->pc = 0x3755C4u;
    {
        const bool branch_taken_0x3755c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3755C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755C4u;
        // 0x3755c8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3755c4) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x3755CCu;
label_3755cc:
    // 0x3755cc: 0x0  nop
    ctx->pc = 0x3755ccu;
    // NOP
label_3755d0:
    // 0x3755d0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3755d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3755d4:
    // 0x3755d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3755d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3755d8:
    // 0x3755d8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_3755dc:
    if (ctx->pc == 0x3755DCu) {
        ctx->pc = 0x3755E0u;
        goto label_3755e0;
    }
    ctx->pc = 0x3755D8u;
    {
        const bool branch_taken_0x3755d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3755d8) {
            ctx->pc = 0x3755F0u;
            goto label_3755f0;
        }
    }
    ctx->pc = 0x3755E0u;
label_3755e0:
    // 0x3755e0: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x3755e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_3755e4:
    // 0x3755e4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3755e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3755e8:
    // 0x3755e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3755ec:
    if (ctx->pc == 0x3755ECu) {
        ctx->pc = 0x3755F0u;
        goto label_3755f0;
    }
    ctx->pc = 0x3755E8u;
    {
        const bool branch_taken_0x3755e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3755e8) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x3755F0u;
label_3755f0:
    // 0x3755f0: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x3755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_3755f4:
    // 0x3755f4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3755f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3755f8:
    // 0x3755f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3755f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3755fc:
    // 0x3755fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3755fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_375600:
    // 0x375600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_375604:
    // 0x375604: 0x3e00008  jr          $ra
label_375608:
    if (ctx->pc == 0x375608u) {
        ctx->pc = 0x375608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375604u;
        // 0x375608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37560Cu;
        goto label_fallthrough_0x375604;
    }
    ctx->pc = 0x375604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375604u;
        // 0x375608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x375604:
    ctx->pc = 0x37560Cu;
}
