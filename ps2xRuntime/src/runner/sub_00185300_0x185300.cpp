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

// Function: sub_00185300
// Address: 0x185300 - 0x1856a0
void sub_00185300_0x185300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185300_0x185300");
#endif

    switch (ctx->pc) {
        case 0x185398u: goto label_185398;
        case 0x1853b8u: goto label_1853b8;
        case 0x1853d0u: goto label_1853d0;
        case 0x1853e0u: goto label_1853e0;
        case 0x185400u: goto label_185400;
        case 0x185410u: goto label_185410;
        case 0x185420u: goto label_185420;
        case 0x185470u: goto label_185470;
        case 0x18548cu: goto label_18548c;
        case 0x18549cu: goto label_18549c;
        case 0x1854bcu: goto label_1854bc;
        case 0x1854ccu: goto label_1854cc;
        case 0x1854dcu: goto label_1854dc;
        case 0x185520u: goto label_185520;
        case 0x185538u: goto label_185538;
        case 0x185574u: goto label_185574;
        case 0x18558cu: goto label_18558c;
        case 0x18559cu: goto label_18559c;
        case 0x1855ccu: goto label_1855cc;
        case 0x1855dcu: goto label_1855dc;
        case 0x1855ecu: goto label_1855ec;
        case 0x1855fcu: goto label_1855fc;
        case 0x18560cu: goto label_18560c;
        case 0x18561cu: goto label_18561c;
        case 0x185630u: goto label_185630;
        case 0x185640u: goto label_185640;
        default: break;
    }

    ctx->pc = 0x185300u;

    // 0x185300: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x185300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x185304: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x185304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x185308: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x185308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18530c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x185310: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x185310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x185314: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x185318: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x185318u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18531c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x185320: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x185320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185328: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x185328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18532c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185330: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x185330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185338: 0x26710040  addiu       $s1, $s3, 0x40
    ctx->pc = 0x185338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x18533c: 0x8c960048  lw          $s6, 0x48($a0)
    ctx->pc = 0x18533cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x185340: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x185340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x185344: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x185344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185348: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x185348u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18534c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x18534cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x185350: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x185350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185354: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x185354u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x185358: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x185358u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18535c: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x18535cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x185360: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x185360u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x185364: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x185364u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 5));
    // 0x185368: 0x8e900074  lw          $s0, 0x74($s4)
    ctx->pc = 0x185368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x18536c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x18536cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x185370: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x185370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x185374: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x185374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185378: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x185378u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x18537c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x18537cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x185380: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x185380u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x185384: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x185384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x185388: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x185388u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x18538c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x18538cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x185390: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x185390u;
    {
        const bool branch_taken_0x185390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185390u;
        // 0x185394: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185390) {
            ctx->pc = 0x1853B8u;
            goto label_1853b8;
        }
    }
    ctx->pc = 0x185398u;
label_185398:
    // 0x185398: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x185398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x18539c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1853a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1853a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1853a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1853a8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1853a8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1853ac: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1853b0: 0xc04144e  jal         func_105138
    ctx->pc = 0x1853B0u;
    SET_GPR_U32(ctx, 31, 0x1853B8u);
    ctx->pc = 0x1853B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853B0u;
    // 0x1853b4: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1853B0u, 0x1853B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853B8u;
label_1853b8:
    // 0x1853b8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1853B8u;
    {
        const bool branch_taken_0x1853b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853b8) {
            ctx->pc = 0x185398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185398;
        }
    }
    ctx->pc = 0x1853C0u;
    // 0x1853c0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1853c4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1853c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1853c8: 0xc04144e  jal         func_105138
    ctx->pc = 0x1853C8u;
    SET_GPR_U32(ctx, 31, 0x1853D0u);
    ctx->pc = 0x1853CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853C8u;
    // 0x1853cc: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1853C8u, 0x1853D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853D0u;
label_1853d0:
    // 0x1853d0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1853d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1853d4: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1853d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1853d8: 0xc041442  jal         func_105108
    ctx->pc = 0x1853D8u;
    SET_GPR_U32(ctx, 31, 0x1853E0u);
    ctx->pc = 0x1853DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853D8u;
    // 0x1853dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1853D8u, 0x1853E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853E0u;
label_1853e0:
    // 0x1853e0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1853e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1853e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1853e8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1853E8u;
    {
        const bool branch_taken_0x1853e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853e8) {
            ctx->pc = 0x1855B8u;
            goto label_1855b8;
        }
    }
    ctx->pc = 0x1853F0u;
    // 0x1853f0: 0xc68c005c  lwc1        $f12, 0x5C($s4)
    ctx->pc = 0x1853f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1853f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1853f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853f8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1853F8u;
    SET_GPR_U32(ctx, 31, 0x185400u);
    ctx->pc = 0x1853FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853F8u;
    // 0x1853fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1853F8u, 0x185400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185400u;
label_185400:
    // 0x185400: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185404: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x185404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x185408: 0xc041442  jal         func_105108
    ctx->pc = 0x185408u;
    SET_GPR_U32(ctx, 31, 0x185410u);
    ctx->pc = 0x18540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185408u;
    // 0x18540c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x185408u, 0x185410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185410u;
label_185410:
    // 0x185410: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x185410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x185414: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x185414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185418: 0xc0414ca  jal         func_105328
    ctx->pc = 0x185418u;
    SET_GPR_U32(ctx, 31, 0x185420u);
    ctx->pc = 0x18541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185418u;
    // 0x18541c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x185418u, 0x185420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185420u;
label_185420:
    // 0x185420: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x185420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x185424: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x185424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x185428: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x185428u;
    {
        const bool branch_taken_0x185428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185428) {
            ctx->pc = 0x185460u;
            goto label_185460;
        }
    }
    ctx->pc = 0x185430u;
    // 0x185430: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x185430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x185434: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185434u;
    {
        const bool branch_taken_0x185434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185434) {
            ctx->pc = 0x185460u;
            goto label_185460;
        }
    }
    ctx->pc = 0x18543Cu;
    // 0x18543c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185440: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x185440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185444: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185448: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x185448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x18544c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x18544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x185450: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x185450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185454: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x185454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185458: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18545c: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x18545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_185460:
    // 0x185460: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185464: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x185464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185468: 0xc041442  jal         func_105108
    ctx->pc = 0x185468u;
    SET_GPR_U32(ctx, 31, 0x185470u);
    ctx->pc = 0x18546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185468u;
    // 0x18546c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x185468u, 0x185470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185470u;
label_185470:
    // 0x185470: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x185474: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x185474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x185478: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x185478u;
    {
        const bool branch_taken_0x185478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185478) {
            ctx->pc = 0x185558u;
            goto label_185558;
        }
    }
    ctx->pc = 0x185480u;
    // 0x185480: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185484: 0xc04d660  jal         func_135980
    ctx->pc = 0x185484u;
    SET_GPR_U32(ctx, 31, 0x18548Cu);
    ctx->pc = 0x185488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185484u;
    // 0x185488: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x185484u, 0x18548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18548Cu;
label_18548c:
    // 0x18548c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x185490: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x185490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185494: 0xc04144e  jal         func_105138
    ctx->pc = 0x185494u;
    SET_GPR_U32(ctx, 31, 0x18549Cu);
    ctx->pc = 0x185498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185494u;
    // 0x185498: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185494u, 0x18549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18549Cu;
label_18549c:
    // 0x18549c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18549cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854a0: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1854a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1854a4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1854a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1854a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1854a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1854ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1854acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1854b0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1854b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1854b4: 0xc04d660  jal         func_135980
    ctx->pc = 0x1854B4u;
    SET_GPR_U32(ctx, 31, 0x1854BCu);
    ctx->pc = 0x1854B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854B4u;
    // 0x1854b8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x1854B4u, 0x1854BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854BCu;
label_1854bc:
    // 0x1854bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1854bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1854c0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1854c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1854c4: 0xc04144e  jal         func_105138
    ctx->pc = 0x1854C4u;
    SET_GPR_U32(ctx, 31, 0x1854CCu);
    ctx->pc = 0x1854C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854C4u;
    // 0x1854c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1854C4u, 0x1854CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854CCu;
label_1854cc:
    // 0x1854cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1854ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1854d0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1854d4: 0xc041442  jal         func_105108
    ctx->pc = 0x1854D4u;
    SET_GPR_U32(ctx, 31, 0x1854DCu);
    ctx->pc = 0x1854D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854D4u;
    // 0x1854d8: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1854D4u, 0x1854DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854DCu;
label_1854dc:
    // 0x1854dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1854dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854e0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1854e4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1854e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1854e8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1854ec: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1854ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1854f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1854f4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1854f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1854f8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1854f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1854fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1854fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185500: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x185500u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x185504: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x185504u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185508: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x185508u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x18550c: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x18550cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x185510: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x185510u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x185514: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x185514u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x185518: 0xc041494  jal         func_105250
    ctx->pc = 0x185518u;
    SET_GPR_U32(ctx, 31, 0x185520u);
    ctx->pc = 0x18551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185518u;
    // 0x18551c: 0x7e230030  sq          $v1, 0x30($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x185518u, 0x185520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185520u;
label_185520:
    // 0x185520: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x185520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x185524: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x185524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185528: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18552c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x18552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x185530: 0xc04144e  jal         func_105138
    ctx->pc = 0x185530u;
    SET_GPR_U32(ctx, 31, 0x185538u);
    ctx->pc = 0x185534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185530u;
    // 0x185534: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185530u, 0x185538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185538u;
label_185538:
    // 0x185538: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x185538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18553c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x18553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185540: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x185540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185544: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x185544u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x185548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18554c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x18554Cu;
    {
        const bool branch_taken_0x18554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18554Cu;
        // 0x185550: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18554c) {
            ctx->pc = 0x185678u;
            goto label_185678;
        }
    }
    ctx->pc = 0x185554u;
    // 0x185554: 0x0  nop
    ctx->pc = 0x185554u;
    // NOP
label_185558:
    // 0x185558: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x185558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x18555c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18555Cu;
    {
        const bool branch_taken_0x18555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18555c) {
            ctx->pc = 0x185580u;
            goto label_185580;
        }
    }
    ctx->pc = 0x185564u;
    // 0x185564: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x185564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x185568: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18556c: 0xc04150c  jal         func_105430
    ctx->pc = 0x18556Cu;
    SET_GPR_U32(ctx, 31, 0x185574u);
    ctx->pc = 0x185570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18556Cu;
    // 0x185570: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18556Cu, 0x185574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185574u;
label_185574:
    // 0x185574: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x185574u;
    {
        const bool branch_taken_0x185574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185574) {
            ctx->pc = 0x1855A0u;
            goto label_1855a0;
        }
    }
    ctx->pc = 0x18557Cu;
    // 0x18557c: 0x0  nop
    ctx->pc = 0x18557cu;
    // NOP
label_185580:
    // 0x185580: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x185580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x185584: 0xc04d660  jal         func_135980
    ctx->pc = 0x185584u;
    SET_GPR_U32(ctx, 31, 0x18558Cu);
    ctx->pc = 0x185588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185584u;
    // 0x185588: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x185584u, 0x18558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18558Cu;
label_18558c:
    // 0x18558c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185590: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x185590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185594: 0xc04144e  jal         func_105138
    ctx->pc = 0x185594u;
    SET_GPR_U32(ctx, 31, 0x18559Cu);
    ctx->pc = 0x185598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185594u;
    // 0x185598: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185594u, 0x18559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18559Cu;
label_18559c:
    // 0x18559c: 0x0  nop
    ctx->pc = 0x18559cu;
    // NOP
label_1855a0:
    // 0x1855a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1855a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855a4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1855a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1855a8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1855a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1855ac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1855acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1855b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1855B0u;
    {
        const bool branch_taken_0x1855b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855B0u;
        // 0x1855b4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855b0) {
            ctx->pc = 0x185678u;
            goto label_185678;
        }
    }
    ctx->pc = 0x1855B8u;
label_1855b8:
    // 0x1855b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x1855bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1855bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1855c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1855c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1855c4: 0xc041494  jal         func_105250
    ctx->pc = 0x1855C4u;
    SET_GPR_U32(ctx, 31, 0x1855CCu);
    ctx->pc = 0x1855C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855C4u;
    // 0x1855c8: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1855C4u, 0x1855CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855CCu;
label_1855cc:
    // 0x1855cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1855ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1855d0: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1855d4: 0xc04144e  jal         func_105138
    ctx->pc = 0x1855D4u;
    SET_GPR_U32(ctx, 31, 0x1855DCu);
    ctx->pc = 0x1855D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855D4u;
    // 0x1855d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1855D4u, 0x1855DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855DCu;
label_1855dc:
    // 0x1855dc: 0xc68c005c  lwc1        $f12, 0x5C($s4)
    ctx->pc = 0x1855dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1855e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1855e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855e4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1855E4u;
    SET_GPR_U32(ctx, 31, 0x1855ECu);
    ctx->pc = 0x1855E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855E4u;
    // 0x1855e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1855E4u, 0x1855ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855ECu;
label_1855ec:
    // 0x1855ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1855ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1855f0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1855f4: 0xc041442  jal         func_105108
    ctx->pc = 0x1855F4u;
    SET_GPR_U32(ctx, 31, 0x1855FCu);
    ctx->pc = 0x1855F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855F4u;
    // 0x1855f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1855F4u, 0x1855FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855FCu;
label_1855fc:
    // 0x1855fc: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1855fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x185600: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x185600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x185604: 0xc0414ca  jal         func_105328
    ctx->pc = 0x185604u;
    SET_GPR_U32(ctx, 31, 0x18560Cu);
    ctx->pc = 0x185608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185604u;
    // 0x185608: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x185604u, 0x18560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18560Cu;
label_18560c:
    // 0x18560c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x185610: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185614: 0xc041442  jal         func_105108
    ctx->pc = 0x185614u;
    SET_GPR_U32(ctx, 31, 0x18561Cu);
    ctx->pc = 0x185618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185614u;
    // 0x185618: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x185614u, 0x18561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18561Cu;
label_18561c:
    // 0x18561c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185620: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x185620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x185624: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x185624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x185628: 0xc04d660  jal         func_135980
    ctx->pc = 0x185628u;
    SET_GPR_U32(ctx, 31, 0x185630u);
    ctx->pc = 0x18562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185628u;
    // 0x18562c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x185628u, 0x185630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185630u;
label_185630:
    // 0x185630: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185634: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x185634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x185638: 0xc04144e  jal         func_105138
    ctx->pc = 0x185638u;
    SET_GPR_U32(ctx, 31, 0x185640u);
    ctx->pc = 0x18563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185638u;
    // 0x18563c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x185638u, 0x185640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185640u;
label_185640:
    // 0x185640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185644: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x185644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x185648: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18564c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x18564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185650: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x185650u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185654: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x185654u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x185658: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185658u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18565c: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x18565cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x185660: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x185660u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x185664: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x185664u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x185668: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x185668u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18566c: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x18566cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
    // 0x185670: 0x78640030  lq          $a0, 0x30($v1)
    ctx->pc = 0x185670u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x185674: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x185674u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
label_185678:
    // 0x185678: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x185678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18567c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18567cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185680: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18568c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18568cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185698: 0x3e00008  jr          $ra
    ctx->pc = 0x185698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185698u;
        // 0x18569c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1856A0u;
}
