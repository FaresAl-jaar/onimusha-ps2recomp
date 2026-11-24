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

// Function: sub_0033F840
// Address: 0x33f840 - 0x33f9b4
void sub_0033F840_0x33f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F840_0x33f840");
#endif

    switch (ctx->pc) {
        case 0x33f8a0u: goto label_33f8a0;
        case 0x33f8c8u: goto label_33f8c8;
        case 0x33f908u: goto label_33f908;
        case 0x33f978u: goto label_33f978;
        default: break;
    }

    ctx->pc = 0x33f840u;

    // 0x33f840: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x33f844: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x33f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x33f848: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x33f84c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33f850: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x33f850u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f854: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33f858: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x33f858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f85c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33f860: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33f860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f864: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33f868: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x33f868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f86c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33f870: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33f870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f874: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x33f874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33f87c: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x33f87cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x33f880: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x33f880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f884: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x33f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x33f888: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x33f888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33f88c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f890: 0x240705b0  addiu       $a3, $zero, 0x5B0
    ctx->pc = 0x33f890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x33f894: 0x2508f7d0  addiu       $t0, $t0, -0x830
    ctx->pc = 0x33f894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965200));
    // 0x33f898: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x33F898u;
    SET_GPR_U32(ctx, 31, 0x33F8A0u);
    ctx->pc = 0x33F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F898u;
    // 0x33f89c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x33F898u, 0x33F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F8A0u;
label_33f8a0:
    // 0x33f8a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33f8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8a4: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x33F8A4u;
    {
        const bool branch_taken_0x33f8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8A4u;
        // 0x33f8a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8a4) {
            ctx->pc = 0x33F980u;
            goto label_33f980;
        }
    }
    ctx->pc = 0x33F8ACu;
    // 0x33f8ac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x33f8acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8b0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x33f8b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8b4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x33f8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8b8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x33f8b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8c0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x33F8C0u;
    SET_GPR_U32(ctx, 31, 0x33F8C8u);
    ctx->pc = 0x33F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F8C0u;
    // 0x33f8c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x33F8C0u, 0x33F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F8C8u;
label_33f8c8:
    // 0x33f8c8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x33f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33f8cc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33f8d0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x33f8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33f8d4: 0x2442f200  addiu       $v0, $v0, -0xE00
    ctx->pc = 0x33f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963712));
    // 0x33f8d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x33f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33f8dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f8e0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x33f8e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f8e4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x33f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33f8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8ec: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x33f8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x33f8f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33f8f4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x33f8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x33f8f8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x33f8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x33f8fc: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x33f8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f900: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x33F900u;
    SET_GPR_U32(ctx, 31, 0x33F908u);
    ctx->pc = 0x33F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F900u;
    // 0x33f904: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x33F900u, 0x33F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F908u;
label_33f908:
    // 0x33f908: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x33f908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x33f90c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33f910: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x33f910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
    // 0x33f914: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x33f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33f918: 0xa21705a8  sb          $s7, 0x5A8($s0)
    ctx->pc = 0x33f918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1448), (uint8_t)GPR_U32(ctx, 23));
    // 0x33f91c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33f920: 0xa21105a9  sb          $s1, 0x5A9($s0)
    ctx->pc = 0x33f920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1449), (uint8_t)GPR_U32(ctx, 17));
    // 0x33f924: 0x2442f204  addiu       $v0, $v0, -0xDFC
    ctx->pc = 0x33f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963716));
    // 0x33f928: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x33f928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x33f92c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33f92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33f930: 0xa20005aa  sb          $zero, 0x5AA($s0)
    ctx->pc = 0x33f930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1450), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f934: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x33f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33f938: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x33f938u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x33f93c: 0x7e030550  sq          $v1, 0x550($s0)
    ctx->pc = 0x33f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 3));
    // 0x33f940: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33f940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33f944: 0x78235c30  lq          $v1, 0x5C30($at)
    ctx->pc = 0x33f944u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C30u));
    // 0x33f948: 0x7e030560  sq          $v1, 0x560($s0)
    ctx->pc = 0x33f948u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1376), GPR_VEC(ctx, 3));
    // 0x33f94c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33f94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33f950: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x33f950u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x33f954: 0x7e030570  sq          $v1, 0x570($s0)
    ctx->pc = 0x33f954u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1392), GPR_VEC(ctx, 3));
    // 0x33f958: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33f95c: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x33f95cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x33f960: 0x7e030580  sq          $v1, 0x580($s0)
    ctx->pc = 0x33f960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), GPR_VEC(ctx, 3));
    // 0x33f964: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x33f964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33f968: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x33f968u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x33f96c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x33f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f970: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x33F970u;
    SET_GPR_U32(ctx, 31, 0x33F978u);
    ctx->pc = 0x33F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F970u;
    // 0x33f974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x33F970u, 0x33F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F978u;
label_33f978:
    // 0x33f978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33F978u;
    {
        const bool branch_taken_0x33f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F978u;
        // 0x33f97c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f978) {
            ctx->pc = 0x33F988u;
            goto label_33f988;
        }
    }
    ctx->pc = 0x33F980u;
label_33f980:
    // 0x33f980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33f980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f984: 0x0  nop
    ctx->pc = 0x33f984u;
    // NOP
label_33f988:
    // 0x33f988: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x33f988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33f98c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33f98cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33f990: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33f990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33f994: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33f994u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33f998: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33f998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f99c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33f99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f9a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33f9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33f9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x33F9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9ACu;
        // 0x33f9b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F9B4u;
}
