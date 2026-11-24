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

// Function: sub_00328380
// Address: 0x328380 - 0x32893c
void sub_00328380_0x328380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328380_0x328380");
#endif

    switch (ctx->pc) {
        case 0x3283f0u: goto label_3283f0;
        case 0x328458u: goto label_328458;
        case 0x328468u: goto label_328468;
        case 0x328498u: goto label_328498;
        case 0x3284b4u: goto label_3284b4;
        case 0x3284c4u: goto label_3284c4;
        case 0x3284d8u: goto label_3284d8;
        case 0x3284f8u: goto label_3284f8;
        case 0x328510u: goto label_328510;
        case 0x328520u: goto label_328520;
        case 0x328540u: goto label_328540;
        case 0x328568u: goto label_328568;
        case 0x328580u: goto label_328580;
        case 0x328588u: goto label_328588;
        case 0x3285d4u: goto label_3285d4;
        case 0x32861cu: goto label_32861c;
        case 0x328708u: goto label_328708;
        case 0x328710u: goto label_328710;
        case 0x328740u: goto label_328740;
        case 0x328748u: goto label_328748;
        case 0x328758u: goto label_328758;
        case 0x328778u: goto label_328778;
        case 0x3287a0u: goto label_3287a0;
        case 0x3287b8u: goto label_3287b8;
        case 0x3287c0u: goto label_3287c0;
        case 0x32880cu: goto label_32880c;
        case 0x328854u: goto label_328854;
        case 0x328920u: goto label_328920;
        default: break;
    }

    ctx->pc = 0x328380u;

    // 0x328380: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x328380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x328384: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x328384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x328388: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x328388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32838c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x328390: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x328390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x328394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x328394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x328398: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x328398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32839c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32839cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283a0: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3283a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3283a4: 0x10a300d4  beq         $a1, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3283A4u;
    {
        const bool branch_taken_0x3283a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3283A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283A4u;
        // 0x3283a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283a4) {
            ctx->pc = 0x3286F8u;
            goto label_3286f8;
        }
    }
    ctx->pc = 0x3283ACu;
    // 0x3283ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3283acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3283b0: 0x10a300c9  beq         $a1, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x3283B0u;
    {
        const bool branch_taken_0x3283b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3283B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283B0u;
        // 0x3283b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283b0) {
            ctx->pc = 0x3286D8u;
            goto label_3286d8;
        }
    }
    ctx->pc = 0x3283B8u;
    // 0x3283b8: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3283B8u;
    {
        const bool branch_taken_0x3283b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3283b8) {
            ctx->pc = 0x328420u;
            goto label_328420;
        }
    }
    ctx->pc = 0x3283C0u;
    // 0x3283c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3283c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3283c4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3283C4u;
    {
        const bool branch_taken_0x3283c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3283c4) {
            ctx->pc = 0x328400u;
            goto label_328400;
        }
    }
    ctx->pc = 0x3283CCu;
    // 0x3283cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3283CCu;
    {
        const bool branch_taken_0x3283cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283cc) {
            ctx->pc = 0x3283E0u;
            goto label_3283e0;
        }
    }
    ctx->pc = 0x3283D4u;
    // 0x3283d4: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x3283D4u;
    {
        const bool branch_taken_0x3283d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283d4) {
            ctx->pc = 0x328920u;
            goto label_328920;
        }
    }
    ctx->pc = 0x3283DCu;
    // 0x3283dc: 0x0  nop
    ctx->pc = 0x3283dcu;
    // NOP
label_3283e0:
    // 0x3283e0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3283E0u;
    {
        const bool branch_taken_0x3283e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3283E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283E0u;
        // 0x3283e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283e0) {
            ctx->pc = 0x3283F0u;
            goto label_3283f0;
        }
    }
    ctx->pc = 0x3283E8u;
    // 0x3283e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3283E8u;
    SET_GPR_U32(ctx, 31, 0x3283F0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3283E8u, 0x3283F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283F0u;
label_3283f0:
    // 0x3283f0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3283f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3283f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3283f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3283f8: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x3283F8u;
    {
        const bool branch_taken_0x3283f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3283FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F8u;
        // 0x3283fc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283f8) {
            ctx->pc = 0x328920u;
            goto label_328920;
        }
    }
    ctx->pc = 0x328400u;
label_328400:
    // 0x328400: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x328400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x328404: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x328404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x328408: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x328408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32840c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x32840cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x328410: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x328410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x328414: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x328414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x328418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x328418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32841c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x32841cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_328420:
    // 0x328420: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x328420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x328424: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x328424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x328428: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x328428u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32842c: 0x0  nop
    ctx->pc = 0x32842cu;
    // NOP
    // 0x328430: 0x0  nop
    ctx->pc = 0x328430u;
    // NOP
    // 0x328434: 0x1010  mfhi        $v0
    ctx->pc = 0x328434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x328438: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x328438u;
    {
        const bool branch_taken_0x328438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328438) {
            ctx->pc = 0x328508u;
            goto label_328508;
        }
    }
    ctx->pc = 0x328440u;
    // 0x328440: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x328440u;
    {
        const bool branch_taken_0x328440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x328444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328440u;
        // 0x328444: 0x921206e0  lbu         $s2, 0x6E0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328440) {
            ctx->pc = 0x3284E8u;
            goto label_3284e8;
        }
    }
    ctx->pc = 0x328448u;
    // 0x328448: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x328448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32844c: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x32844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x328450: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x328450u;
    SET_GPR_U32(ctx, 31, 0x328458u);
    ctx->pc = 0x328454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328450u;
    // 0x328454: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x328450u, 0x328458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328458u;
label_328458:
    // 0x328458: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x328458u;
    {
        const bool branch_taken_0x328458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328458u;
        // 0x32845c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328458) {
            ctx->pc = 0x3284E8u;
            goto label_3284e8;
        }
    }
    ctx->pc = 0x328460u;
    // 0x328460: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x328460u;
    SET_GPR_U32(ctx, 31, 0x328468u);
    ctx->pc = 0x328464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328460u;
    // 0x328464: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x328460u, 0x328468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328468u;
label_328468:
    // 0x328468: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x328468u;
    {
        const bool branch_taken_0x328468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328468u;
        // 0x32846c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328468) {
            ctx->pc = 0x3284E8u;
            goto label_3284e8;
        }
    }
    ctx->pc = 0x328470u;
    // 0x328470: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x328470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x328474: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x328474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x328478: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x328478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x32847c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328480: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x328480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x328484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x328484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328488: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x328488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32848c: 0x24520550  addiu       $s2, $v0, 0x550
    ctx->pc = 0x32848cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x328490: 0xc097340  jal         func_25CD00
    ctx->pc = 0x328490u;
    SET_GPR_U32(ctx, 31, 0x328498u);
    ctx->pc = 0x328494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328490u;
    // 0x328494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x328490u, 0x328498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328498u;
label_328498:
    // 0x328498: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x328498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32849c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3284a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3284a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3284a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3284a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3284a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3284ac: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3284ACu;
    SET_GPR_U32(ctx, 31, 0x3284B4u);
    ctx->pc = 0x3284B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284ACu;
    // 0x3284b0: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3284ACu, 0x3284B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284B4u;
label_3284b4:
    // 0x3284b4: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3284b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3284b8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3284b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3284bc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3284BCu;
    SET_GPR_U32(ctx, 31, 0x3284C4u);
    ctx->pc = 0x3284C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284BCu;
    // 0x3284c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3284BCu, 0x3284C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284C4u;
label_3284c4:
    // 0x3284c4: 0x8e26085c  lw          $a2, 0x85C($s1)
    ctx->pc = 0x3284c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x3284c8: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3284c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3284cc: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3284ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3284d0: 0xc0aadd8  jal         func_2AB760
    ctx->pc = 0x3284D0u;
    SET_GPR_U32(ctx, 31, 0x3284D8u);
    ctx->pc = 0x3284D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284D0u;
    // 0x3284d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB760u, 0x3284D0u, 0x3284D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284D8u;
label_3284d8:
    // 0x3284d8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x3284d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x3284dc: 0x920206e1  lbu         $v0, 0x6E1($s0)
    ctx->pc = 0x3284dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1761)));
    // 0x3284e0: 0xa2420046  sb          $v0, 0x46($s2)
    ctx->pc = 0x3284e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x3284e4: 0xa6400044  sh          $zero, 0x44($s2)
    ctx->pc = 0x3284e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 0));
label_3284e8:
    // 0x3284e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3284e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3284ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3284ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284f0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3284F0u;
    SET_GPR_U32(ctx, 31, 0x3284F8u);
    ctx->pc = 0x3284F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284F0u;
    // 0x3284f4: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3284F0u, 0x3284F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284F8u;
label_3284f8:
    // 0x3284f8: 0x920206e0  lbu         $v0, 0x6E0($s0)
    ctx->pc = 0x3284f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1760)));
    // 0x3284fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3284fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x328500: 0xa20206e0  sb          $v0, 0x6E0($s0)
    ctx->pc = 0x328500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1760), (uint8_t)GPR_U32(ctx, 2));
    // 0x328504: 0x0  nop
    ctx->pc = 0x328504u;
    // NOP
label_328508:
    // 0x328508: 0xc0c0818  jal         func_302060
    ctx->pc = 0x328508u;
    SET_GPR_U32(ctx, 31, 0x328510u);
    ctx->pc = 0x32850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328508u;
    // 0x32850c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x328508u, 0x328510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328510u;
label_328510:
    // 0x328510: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x328510u;
    {
        const bool branch_taken_0x328510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328510u;
        // 0x328514: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328510) {
            ctx->pc = 0x328578u;
            goto label_328578;
        }
    }
    ctx->pc = 0x328518u;
    // 0x328518: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x328518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32851c: 0x0  nop
    ctx->pc = 0x32851cu;
    // NOP
label_328520:
    // 0x328520: 0x86230594  lh          $v1, 0x594($s1)
    ctx->pc = 0x328520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x328524: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x328524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x328528: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x328528u;
    {
        const bool branch_taken_0x328528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328528u;
        // 0x32852c: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328528) {
            ctx->pc = 0x328568u;
            goto label_328568;
        }
    }
    ctx->pc = 0x328530u;
    // 0x328530: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x328530u;
    {
        const bool branch_taken_0x328530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x328530) {
            ctx->pc = 0x328568u;
            goto label_328568;
        }
    }
    ctx->pc = 0x328538u;
    // 0x328538: 0xc096c80  jal         func_25B200
    ctx->pc = 0x328538u;
    SET_GPR_U32(ctx, 31, 0x328540u);
    ctx->pc = 0x32853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328538u;
    // 0x32853c: 0x8e240590  lw          $a0, 0x590($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x328538u, 0x328540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328540u;
label_328540:
    // 0x328540: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x328540u;
    {
        const bool branch_taken_0x328540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328540) {
            ctx->pc = 0x328568u;
            goto label_328568;
        }
    }
    ctx->pc = 0x328548u;
    // 0x328548: 0x92260596  lbu         $a2, 0x596($s1)
    ctx->pc = 0x328548u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1430)));
    // 0x32854c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x328550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x328550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x328554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328558: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x328558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x32855c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32855cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328560: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x328560u;
    SET_GPR_U32(ctx, 31, 0x328568u);
    ctx->pc = 0x328564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328560u;
    // 0x328564: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x328560u, 0x328568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328568u;
label_328568:
    // 0x328568: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x328568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32856c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x32856cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x328570: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x328570u;
    {
        const bool branch_taken_0x328570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328570u;
        // 0x328574: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328570) {
            ctx->pc = 0x328520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328520;
        }
    }
    ctx->pc = 0x328578u;
label_328578:
    // 0x328578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x328578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32857c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x32857cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328580:
    // 0x328580: 0xc096c80  jal         func_25B200
    ctx->pc = 0x328580u;
    SET_GPR_U32(ctx, 31, 0x328588u);
    ctx->pc = 0x328584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328580u;
    // 0x328584: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x328580u, 0x328588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328588u;
label_328588:
    // 0x328588: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x328588u;
    {
        const bool branch_taken_0x328588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328588) {
            ctx->pc = 0x328630u;
            goto label_328630;
        }
    }
    ctx->pc = 0x328590u;
    // 0x328590: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x328590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x328594: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x328594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x328598: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x328598u;
    {
        const bool branch_taken_0x328598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x328598) {
            ctx->pc = 0x3285D8u;
            goto label_3285d8;
        }
    }
    ctx->pc = 0x3285A0u;
    // 0x3285a0: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3285a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3285a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3285a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3285a8: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x3285a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x3285ac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3285acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3285b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3285b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285b4: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3285b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3285b8: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x3285b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3285bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3285bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3285c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3285c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3285c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285cc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3285CCu;
    SET_GPR_U32(ctx, 31, 0x3285D4u);
    ctx->pc = 0x3285D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285CCu;
    // 0x3285d0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3285CCu, 0x3285D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285D4u;
label_3285d4:
    // 0x3285d4: 0x0  nop
    ctx->pc = 0x3285d4u;
    // NOP
label_3285d8:
    // 0x3285d8: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x3285d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x3285dc: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3285dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3285e0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3285E0u;
    {
        const bool branch_taken_0x3285e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3285e0) {
            ctx->pc = 0x328620u;
            goto label_328620;
        }
    }
    ctx->pc = 0x3285E8u;
    // 0x3285e8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3285e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3285ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3285ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3285f0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x3285f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x3285f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3285f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3285f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3285f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285fc: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3285fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x328600: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x328600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x328604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x328604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328608: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x328608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32860c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32860cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328610: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x328610u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328614: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x328614u;
    SET_GPR_U32(ctx, 31, 0x32861Cu);
    ctx->pc = 0x328618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328614u;
    // 0x328618: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x328614u, 0x32861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32861Cu;
label_32861c:
    // 0x32861c: 0x0  nop
    ctx->pc = 0x32861cu;
    // NOP
label_328620:
    // 0x328620: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x328620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x328624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x328624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328628: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x328628u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x32862c: 0x0  nop
    ctx->pc = 0x32862cu;
    // NOP
label_328630:
    // 0x328630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x328634: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x328634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x328638: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x328638u;
    {
        const bool branch_taken_0x328638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328638u;
        // 0x32863c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328638) {
            ctx->pc = 0x328580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328580;
        }
    }
    ctx->pc = 0x328640u;
    // 0x328640: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x328640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x328644: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x328644u;
    {
        const bool branch_taken_0x328644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328644) {
            ctx->pc = 0x3286B8u;
            goto label_3286b8;
        }
    }
    ctx->pc = 0x32864Cu;
    // 0x32864c: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x32864cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x328650: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x328650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x328654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x328654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x328658: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x328658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32865c: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x32865cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x328660: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x328660u;
    {
        const bool branch_taken_0x328660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x328660) {
            ctx->pc = 0x328698u;
            goto label_328698;
        }
    }
    ctx->pc = 0x328668u;
    // 0x328668: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32866c: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x32866cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x328670: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x328670u;
    {
        const bool branch_taken_0x328670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x328674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328670u;
        // 0x328674: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328670) {
            ctx->pc = 0x3286B8u;
            goto label_3286b8;
        }
    }
    ctx->pc = 0x328678u;
    // 0x328678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32867c: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32867cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x328680: 0x0  nop
    ctx->pc = 0x328680u;
    // NOP
    // 0x328684: 0x0  nop
    ctx->pc = 0x328684u;
    // NOP
    // 0x328688: 0x2010  mfhi        $a0
    ctx->pc = 0x328688u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32868c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32868cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x328690: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x328690u;
    {
        const bool branch_taken_0x328690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328690u;
        // 0x328694: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328690) {
            ctx->pc = 0x3286B8u;
            goto label_3286b8;
        }
    }
    ctx->pc = 0x328698u;
label_328698:
    // 0x328698: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x328698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32869c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32869cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3286a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3286A0u;
    {
        const bool branch_taken_0x3286a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3286a0) {
            ctx->pc = 0x3286B8u;
            goto label_3286b8;
        }
    }
    ctx->pc = 0x3286A8u;
    // 0x3286a8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3286a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3286ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3286acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3286b0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3286b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3286b4: 0x0  nop
    ctx->pc = 0x3286b4u;
    // NOP
label_3286b8:
    // 0x3286b8: 0x920306e0  lbu         $v1, 0x6E0($s0)
    ctx->pc = 0x3286b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1760)));
    // 0x3286bc: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x3286bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3286c0: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x3286C0u;
    {
        const bool branch_taken_0x3286c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3286c0) {
            ctx->pc = 0x328920u;
            goto label_328920;
        }
    }
    ctx->pc = 0x3286C8u;
    // 0x3286c8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3286c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3286cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3286ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3286d0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3286D0u;
    {
        const bool branch_taken_0x3286d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286D0u;
        // 0x3286d4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286d0) {
            ctx->pc = 0x328920u;
            goto label_328920;
        }
    }
    ctx->pc = 0x3286D8u;
label_3286d8:
    // 0x3286d8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3286d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3286dc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3286dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3286e0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3286e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3286e4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3286e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3286e8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3286e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3286ec: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3286ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3286f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3286f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3286f4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3286f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3286f8:
    // 0x3286f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3286f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3286fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328700: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x328700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328704: 0x0  nop
    ctx->pc = 0x328704u;
    // NOP
label_328708:
    // 0x328708: 0xc096c80  jal         func_25B200
    ctx->pc = 0x328708u;
    SET_GPR_U32(ctx, 31, 0x328710u);
    ctx->pc = 0x32870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328708u;
    // 0x32870c: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x328708u, 0x328710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328710u;
label_328710:
    // 0x328710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x328710u;
    {
        const bool branch_taken_0x328710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328710) {
            ctx->pc = 0x328720u;
            goto label_328720;
        }
    }
    ctx->pc = 0x328718u;
    // 0x328718: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x328718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x32871c: 0x0  nop
    ctx->pc = 0x32871cu;
    // NOP
label_328720:
    // 0x328720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x328724: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x328724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x328728: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x328728u;
    {
        const bool branch_taken_0x328728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328728u;
        // 0x32872c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328728) {
            ctx->pc = 0x328708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328708;
        }
    }
    ctx->pc = 0x328730u;
    // 0x328730: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x328730u;
    {
        const bool branch_taken_0x328730 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x328734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328730u;
        // 0x328734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328730) {
            ctx->pc = 0x328740u;
            goto label_328740;
        }
    }
    ctx->pc = 0x328738u;
    // 0x328738: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x328738u;
    SET_GPR_U32(ctx, 31, 0x328740u);
    ctx->pc = 0x32873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328738u;
    // 0x32873c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x328738u, 0x328740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328740u;
label_328740:
    // 0x328740: 0xc0c0818  jal         func_302060
    ctx->pc = 0x328740u;
    SET_GPR_U32(ctx, 31, 0x328748u);
    ctx->pc = 0x328744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328740u;
    // 0x328744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x328740u, 0x328748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328748u;
label_328748:
    // 0x328748: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x328748u;
    {
        const bool branch_taken_0x328748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328748u;
        // 0x32874c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328748) {
            ctx->pc = 0x3287B0u;
            goto label_3287b0;
        }
    }
    ctx->pc = 0x328750u;
    // 0x328750: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x328750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328754: 0x0  nop
    ctx->pc = 0x328754u;
    // NOP
label_328758:
    // 0x328758: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x328758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x32875c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x32875cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x328760: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x328760u;
    {
        const bool branch_taken_0x328760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328760u;
        // 0x328764: 0x28610074  slti        $at, $v1, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)116) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328760) {
            ctx->pc = 0x3287A0u;
            goto label_3287a0;
        }
    }
    ctx->pc = 0x328768u;
    // 0x328768: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x328768u;
    {
        const bool branch_taken_0x328768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x328768) {
            ctx->pc = 0x3287A0u;
            goto label_3287a0;
        }
    }
    ctx->pc = 0x328770u;
    // 0x328770: 0xc096c80  jal         func_25B200
    ctx->pc = 0x328770u;
    SET_GPR_U32(ctx, 31, 0x328778u);
    ctx->pc = 0x328774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328770u;
    // 0x328774: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x328770u, 0x328778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328778u;
label_328778:
    // 0x328778: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x328778u;
    {
        const bool branch_taken_0x328778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328778) {
            ctx->pc = 0x3287A0u;
            goto label_3287a0;
        }
    }
    ctx->pc = 0x328780u;
    // 0x328780: 0x92460596  lbu         $a2, 0x596($s2)
    ctx->pc = 0x328780u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1430)));
    // 0x328784: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x328784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x328788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x328788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32878c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328790: 0x26450550  addiu       $a1, $s2, 0x550
    ctx->pc = 0x328790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x328794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x328794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328798: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x328798u;
    SET_GPR_U32(ctx, 31, 0x3287A0u);
    ctx->pc = 0x32879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328798u;
    // 0x32879c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x328798u, 0x3287A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287A0u;
label_3287a0:
    // 0x3287a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3287a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3287a4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x3287a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3287a8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3287A8u;
    {
        const bool branch_taken_0x3287a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287A8u;
        // 0x3287ac: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287a8) {
            ctx->pc = 0x328758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328758;
        }
    }
    ctx->pc = 0x3287B0u;
label_3287b0:
    // 0x3287b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3287b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3287b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3287b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3287b8:
    // 0x3287b8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3287B8u;
    SET_GPR_U32(ctx, 31, 0x3287C0u);
    ctx->pc = 0x3287BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287B8u;
    // 0x3287bc: 0x8e440590  lw          $a0, 0x590($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3287B8u, 0x3287C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287C0u;
label_3287c0:
    // 0x3287c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3287C0u;
    {
        const bool branch_taken_0x3287c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3287c0) {
            ctx->pc = 0x328868u;
            goto label_328868;
        }
    }
    ctx->pc = 0x3287C8u;
    // 0x3287c8: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x3287c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x3287cc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3287ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3287d0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3287D0u;
    {
        const bool branch_taken_0x3287d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3287d0) {
            ctx->pc = 0x328810u;
            goto label_328810;
        }
    }
    ctx->pc = 0x3287D8u;
    // 0x3287d8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3287d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3287dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3287dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3287e0: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x3287e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x3287e4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3287e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3287e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3287e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3287ec: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3287ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3287f0: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x3287f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3287f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3287f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3287f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3287f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3287fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3287fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328800: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x328800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328804: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x328804u;
    SET_GPR_U32(ctx, 31, 0x32880Cu);
    ctx->pc = 0x328808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328804u;
    // 0x328808: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x328804u, 0x32880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32880Cu;
label_32880c:
    // 0x32880c: 0x0  nop
    ctx->pc = 0x32880cu;
    // NOP
label_328810:
    // 0x328810: 0x86440594  lh          $a0, 0x594($s2)
    ctx->pc = 0x328810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x328814: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x328814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x328818: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x328818u;
    {
        const bool branch_taken_0x328818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x328818) {
            ctx->pc = 0x328858u;
            goto label_328858;
        }
    }
    ctx->pc = 0x328820u;
    // 0x328820: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x328820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x328824: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x328824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x328828: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x328828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x32882c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x328830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328834: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x328834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x328838: 0x26470580  addiu       $a3, $s2, 0x580
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x32883c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32883cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328840: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x328840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328844: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x328844u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328848: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x328848u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32884c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32884Cu;
    SET_GPR_U32(ctx, 31, 0x328854u);
    ctx->pc = 0x328850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32884Cu;
    // 0x328850: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32884Cu, 0x328854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328854u;
label_328854:
    // 0x328854: 0x0  nop
    ctx->pc = 0x328854u;
    // NOP
label_328858:
    // 0x328858: 0x86430594  lh          $v1, 0x594($s2)
    ctx->pc = 0x328858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1428)));
    // 0x32885c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328860: 0xa6430594  sh          $v1, 0x594($s2)
    ctx->pc = 0x328860u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1428), (uint16_t)GPR_U32(ctx, 3));
    // 0x328864: 0x0  nop
    ctx->pc = 0x328864u;
    // NOP
label_328868:
    // 0x328868: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32886c: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x32886cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x328870: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x328870u;
    {
        const bool branch_taken_0x328870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x328874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328870u;
        // 0x328874: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328870) {
            ctx->pc = 0x3287B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3287b8;
        }
    }
    ctx->pc = 0x328878u;
    // 0x328878: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x328878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x32887c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32887Cu;
    {
        const bool branch_taken_0x32887c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32887Cu;
        // 0x328880: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32887c) {
            ctx->pc = 0x328890u;
            goto label_328890;
        }
    }
    ctx->pc = 0x328884u;
    // 0x328884: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x328884u;
    {
        const bool branch_taken_0x328884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328884) {
            ctx->pc = 0x328910u;
            goto label_328910;
        }
    }
    ctx->pc = 0x32888Cu;
    // 0x32888c: 0x0  nop
    ctx->pc = 0x32888cu;
    // NOP
label_328890:
    // 0x328890: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x328890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x328894: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x328894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x328898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x328898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32889c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32889cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3288a0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3288a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3288a4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3288A4u;
    {
        const bool branch_taken_0x3288a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3288a4) {
            ctx->pc = 0x3288E0u;
            goto label_3288e0;
        }
    }
    ctx->pc = 0x3288ACu;
    // 0x3288ac: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3288acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3288b0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3288b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3288b4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3288B4u;
    {
        const bool branch_taken_0x3288b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3288B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288B4u;
        // 0x3288b8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288b4) {
            ctx->pc = 0x328908u;
            goto label_328908;
        }
    }
    ctx->pc = 0x3288BCu;
    // 0x3288bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3288bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3288c0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3288c0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3288c4: 0x0  nop
    ctx->pc = 0x3288c4u;
    // NOP
    // 0x3288c8: 0x0  nop
    ctx->pc = 0x3288c8u;
    // NOP
    // 0x3288cc: 0x2010  mfhi        $a0
    ctx->pc = 0x3288ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3288d0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3288d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3288d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3288D4u;
    {
        const bool branch_taken_0x3288d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3288D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288D4u;
        // 0x3288d8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288d4) {
            ctx->pc = 0x328908u;
            goto label_328908;
        }
    }
    ctx->pc = 0x3288DCu;
    // 0x3288dc: 0x0  nop
    ctx->pc = 0x3288dcu;
    // NOP
label_3288e0:
    // 0x3288e0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3288e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3288e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3288e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3288e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3288E8u;
    {
        const bool branch_taken_0x3288e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3288e8) {
            ctx->pc = 0x328908u;
            goto label_328908;
        }
    }
    ctx->pc = 0x3288F0u;
    // 0x3288f0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3288f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3288f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3288f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3288f8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3288f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3288fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3288FCu;
    {
        const bool branch_taken_0x3288fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288FCu;
        // 0x328900: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288fc) {
            ctx->pc = 0x328910u;
            goto label_328910;
        }
    }
    ctx->pc = 0x328904u;
    // 0x328904: 0x0  nop
    ctx->pc = 0x328904u;
    // NOP
label_328908:
    // 0x328908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32890c: 0x0  nop
    ctx->pc = 0x32890cu;
    // NOP
label_328910:
    // 0x328910: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x328910u;
    {
        const bool branch_taken_0x328910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x328914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328910u;
        // 0x328914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328910) {
            ctx->pc = 0x328920u;
            goto label_328920;
        }
    }
    ctx->pc = 0x328918u;
    // 0x328918: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x328918u;
    SET_GPR_U32(ctx, 31, 0x328920u);
    ctx->pc = 0x32891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328918u;
    // 0x32891c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x328918u, 0x328920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328920u;
label_328920:
    // 0x328920: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x328920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328924: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x328924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328928: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x328928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32892c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32892cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328930: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x328930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328934: 0x3e00008  jr          $ra
    ctx->pc = 0x328934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328934u;
        // 0x328938: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32893Cu;
}
