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

// Function: sub_00323160
// Address: 0x323160 - 0x3232d8
void sub_00323160_0x323160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323160_0x323160");
#endif

    switch (ctx->pc) {
        case 0x3231c8u: goto label_3231c8;
        case 0x3231e4u: goto label_3231e4;
        case 0x3231f4u: goto label_3231f4;
        case 0x323214u: goto label_323214;
        case 0x32323cu: goto label_32323c;
        default: break;
    }

    ctx->pc = 0x323160u;

    // 0x323160: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x323160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x323164: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x323164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x323168: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x323168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32316c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x323170: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x323170u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323174: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x323174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x323178: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x323178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32317c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x323180: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x323180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323184: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x323184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x323188: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x323188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32318c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x323190: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x323190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x323194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323198: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x323198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32319c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x32319cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3231a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3231a4: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3231a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3231a8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3231a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3231acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3231b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3231b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231b8: 0x240705f0  addiu       $a3, $zero, 0x5F0
    ctx->pc = 0x3231b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x3231bc: 0x250830f0  addiu       $t0, $t0, 0x30F0
    ctx->pc = 0x3231bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12528));
    // 0x3231c0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3231C0u;
    SET_GPR_U32(ctx, 31, 0x3231C8u);
    ctx->pc = 0x3231C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231C0u;
    // 0x3231c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3231C0u, 0x3231C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231C8u;
label_3231c8:
    // 0x3231c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3231c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231cc: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3231CCu;
    {
        const bool branch_taken_0x3231cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231CCu;
        // 0x3231d0: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231cc) {
            ctx->pc = 0x3232A0u;
            goto label_3232a0;
        }
    }
    ctx->pc = 0x3231D4u;
    // 0x3231d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3231d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3231d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3231d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231dc: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x3231DCu;
    SET_GPR_U32(ctx, 31, 0x3231E4u);
    ctx->pc = 0x3231E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231DCu;
    // 0x3231e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x3231DCu, 0x3231E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231E4u;
label_3231e4:
    // 0x3231e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3231e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3231e8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3231e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3231ec: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3231ECu;
    SET_GPR_U32(ctx, 31, 0x3231F4u);
    ctx->pc = 0x3231F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231ECu;
    // 0x3231f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3231ECu, 0x3231F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231F4u;
label_3231f4:
    // 0x3231f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3231f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231f8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3231f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231fc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3231fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323204: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x323204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x323208: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x323208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32320c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x32320Cu;
    SET_GPR_U32(ctx, 31, 0x323214u);
    ctx->pc = 0x323210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32320Cu;
    // 0x323210: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x32320Cu, 0x323214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323214u;
label_323214:
    // 0x323214: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x323214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x323218: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x323218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x32321c: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x32321cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x323220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323224: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x323224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x323228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32322c: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x32322cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x323230: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x323230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x323234: 0xc0c09ac  jal         func_3026B0
    ctx->pc = 0x323234u;
    SET_GPR_U32(ctx, 31, 0x32323Cu);
    ctx->pc = 0x323238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323234u;
    // 0x323238: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3026B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3026B0u, 0x323234u, 0x32323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32323Cu;
label_32323c:
    // 0x32323c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x32323cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x323240: 0xa21705d2  sb          $s7, 0x5D2($s0)
    ctx->pc = 0x323240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1490), (uint8_t)GPR_U32(ctx, 23));
    // 0x323244: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x323244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x323248: 0xa21e05d3  sb          $fp, 0x5D3($s0)
    ctx->pc = 0x323248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1491), (uint8_t)GPR_U32(ctx, 30));
    // 0x32324c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323250: 0xa21105e0  sb          $s1, 0x5E0($s0)
    ctx->pc = 0x323250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1504), (uint8_t)GPR_U32(ctx, 17));
    // 0x323254: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x323254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x323258: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x323258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32325c: 0x2463cb68  addiu       $v1, $v1, -0x3498
    ctx->pc = 0x32325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953832));
    // 0x323260: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x323260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x323264: 0xa21305d4  sb          $s3, 0x5D4($s0)
    ctx->pc = 0x323264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1492), (uint8_t)GPR_U32(ctx, 19));
    // 0x323268: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x323268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32326c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x32326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323270: 0x2442cb62  addiu       $v0, $v0, -0x349E
    ctx->pc = 0x323270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953826));
    // 0x323274: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x323274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x323278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32327c: 0xe60005cc  swc1        $f0, 0x5CC($s0)
    ctx->pc = 0x32327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1484), bits); }
    // 0x323280: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x323280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323284: 0xa60305d0  sh          $v1, 0x5D0($s0)
    ctx->pc = 0x323284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1488), (uint16_t)GPR_U32(ctx, 3));
    // 0x323288: 0xa20205d5  sb          $v0, 0x5D5($s0)
    ctx->pc = 0x323288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1493), (uint8_t)GPR_U32(ctx, 2));
    // 0x32328c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x32328cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x323290: 0x7e020590  sq          $v0, 0x590($s0)
    ctx->pc = 0x323290u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), GPR_VEC(ctx, 2));
    // 0x323294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x323294u;
    {
        const bool branch_taken_0x323294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323294u;
        // 0x323298: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323294) {
            ctx->pc = 0x3232A8u;
            goto label_3232a8;
        }
    }
    ctx->pc = 0x32329Cu;
    // 0x32329c: 0x0  nop
    ctx->pc = 0x32329cu;
    // NOP
label_3232a0:
    // 0x3232a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3232a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3232a4: 0x0  nop
    ctx->pc = 0x3232a4u;
    // NOP
label_3232a8:
    // 0x3232a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3232a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3232ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3232acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3232b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3232b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3232b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3232b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3232b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3232b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3232bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3232bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3232c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3232c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3232c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3232c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3232c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3232c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3232cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3232ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3232d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3232D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D0u;
        // 0x3232d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3232D8u;
}
