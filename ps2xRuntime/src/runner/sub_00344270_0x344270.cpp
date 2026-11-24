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

// Function: sub_00344270
// Address: 0x344270 - 0x3444ec
void sub_00344270_0x344270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344270_0x344270");
#endif

    switch (ctx->pc) {
        case 0x3442d0u: goto label_3442d0;
        case 0x3442f8u: goto label_3442f8;
        case 0x34434cu: goto label_34434c;
        case 0x3443dcu: goto label_3443dc;
        case 0x3443ecu: goto label_3443ec;
        case 0x344400u: goto label_344400;
        case 0x344494u: goto label_344494;
        default: break;
    }

    ctx->pc = 0x344270u;

    // 0x344270: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x344270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x344274: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x344274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x344278: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x344278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34427c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x344280: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x344280u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344284: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x344284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x344288: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x344288u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34428c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x344290: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x344290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344294: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x344294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x344298: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x344298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34429c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3442a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3442a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3442a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3442a8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3442a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3442acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3442b0: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x3442b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x3442b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3442b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442b8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x3442b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3442bc: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3442bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3442c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3442c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442c4: 0x24070590  addiu       $a3, $zero, 0x590
    ctx->pc = 0x3442c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x3442c8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3442C8u;
    SET_GPR_U32(ctx, 31, 0x3442D0u);
    ctx->pc = 0x3442CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442C8u;
    // 0x3442cc: 0x25084200  addiu       $t0, $t0, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3442C8u, 0x3442D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442D0u;
label_3442d0:
    // 0x3442d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3442d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442d4: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
    ctx->pc = 0x3442D4u;
    {
        const bool branch_taken_0x3442d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442D4u;
        // 0x3442d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442d4) {
            ctx->pc = 0x3444B8u;
            goto label_3444b8;
        }
    }
    ctx->pc = 0x3442DCu;
    // 0x3442dc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3442dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3442e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3442e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3442e8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3442e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3442ec: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3442ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442f0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3442F0u;
    SET_GPR_U32(ctx, 31, 0x3442F8u);
    ctx->pc = 0x3442F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442F0u;
    // 0x3442f4: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3442F0u, 0x3442F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442F8u;
label_3442f8:
    // 0x3442f8: 0x93a800a0  lbu         $t0, 0xA0($sp)
    ctx->pc = 0x3442f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3442fc: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3442fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x344300: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x344300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x344304: 0x24c6f460  addiu       $a2, $a2, -0xBA0
    ctx->pc = 0x344304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964320));
    // 0x344308: 0x24a5f462  addiu       $a1, $a1, -0xB9E
    ctx->pc = 0x344308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964322));
    // 0x34430c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x34430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x344310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344318: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x344318u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x34431c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x34431cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x344320: 0x78080  sll         $s0, $a3, 2
    ctx->pc = 0x344320u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x344324: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x344324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x344328: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x344328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x34432c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x34432cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x344330: 0xa6260526  sh          $a2, 0x526($s1)
    ctx->pc = 0x344330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x344334: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x344334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x344338: 0xa6250528  sh          $a1, 0x528($s1)
    ctx->pc = 0x344338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x34433c: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x34433cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x344340: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x344340u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x344344: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x344344u;
    SET_GPR_U32(ctx, 31, 0x34434Cu);
    ctx->pc = 0x344348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344344u;
    // 0x344348: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x344344u, 0x34434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34434Cu;
label_34434c:
    // 0x34434c: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x34434cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
    // 0x344350: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x344350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x344354: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x344354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x344358: 0xae200574  sw          $zero, 0x574($s1)
    ctx->pc = 0x344358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 0));
    // 0x34435c: 0xae240580  sw          $a0, 0x580($s1)
    ctx->pc = 0x34435cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 4));
    // 0x344360: 0x2442f464  addiu       $v0, $v0, -0xB9C
    ctx->pc = 0x344360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964324));
    // 0x344364: 0xa235058b  sb          $s5, 0x58B($s1)
    ctx->pc = 0x344364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1419), (uint8_t)GPR_U32(ctx, 21));
    // 0x344368: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x344368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34436c: 0xae240584  sw          $a0, 0x584($s1)
    ctx->pc = 0x34436cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 4));
    // 0x344370: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x344370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x344374: 0xa235058c  sb          $s5, 0x58C($s1)
    ctx->pc = 0x344374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1420), (uint8_t)GPR_U32(ctx, 21));
    // 0x344378: 0x2442f46c  addiu       $v0, $v0, -0xB94
    ctx->pc = 0x344378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964332));
    // 0x34437c: 0x93a600a0  lbu         $a2, 0xA0($sp)
    ctx->pc = 0x34437cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x344380: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x344380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x344384: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344388: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x344388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34438c: 0xa226058d  sb          $a2, 0x58D($s1)
    ctx->pc = 0x34438cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1421), (uint8_t)GPR_U32(ctx, 6));
    // 0x344390: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x344390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x344394: 0x9286000a  lbu         $a2, 0xA($s4)
    ctx->pc = 0x344394u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x344398: 0xa2260588  sb          $a2, 0x588($s1)
    ctx->pc = 0x344398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1416), (uint8_t)GPR_U32(ctx, 6));
    // 0x34439c: 0xa2200589  sb          $zero, 0x589($s1)
    ctx->pc = 0x34439cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1417), (uint8_t)GPR_U32(ctx, 0));
    // 0x3443a0: 0xa220058a  sb          $zero, 0x58A($s1)
    ctx->pc = 0x3443a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1418), (uint8_t)GPR_U32(ctx, 0));
    // 0x3443a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3443a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3443a8: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x3443a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x3443ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3443acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3443b0: 0xe620057c  swc1        $f0, 0x57C($s1)
    ctx->pc = 0x3443b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1404), bits); }
    // 0x3443b4: 0xa220058e  sb          $zero, 0x58E($s1)
    ctx->pc = 0x3443b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1422), (uint8_t)GPR_U32(ctx, 0));
    // 0x3443b8: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x3443b8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x3443bc: 0x7e220560  sq          $v0, 0x560($s1)
    ctx->pc = 0x3443bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 2));
    // 0x3443c0: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x3443c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3443c4: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x3443c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
    // 0x3443c8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3443c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3443cc: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x3443ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x3443d0: 0xc62c0578  lwc1        $f12, 0x578($s1)
    ctx->pc = 0x3443d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3443d4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3443D4u;
    SET_GPR_U32(ctx, 31, 0x3443DCu);
    ctx->pc = 0x3443D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443D4u;
    // 0x3443d8: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3443D4u, 0x3443DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443DCu;
label_3443dc:
    // 0x3443dc: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x3443dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3443e0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3443e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3443e4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3443E4u;
    SET_GPR_U32(ctx, 31, 0x3443ECu);
    ctx->pc = 0x3443E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443E4u;
    // 0x3443e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3443E4u, 0x3443ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443ECu;
label_3443ec:
    // 0x3443ec: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3443ECu;
    {
        const bool branch_taken_0x3443ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3443ec) {
            ctx->pc = 0x344408u;
            goto label_344408;
        }
    }
    ctx->pc = 0x3443F4u;
    // 0x3443f4: 0x92240588  lbu         $a0, 0x588($s1)
    ctx->pc = 0x3443f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1416)));
    // 0x3443f8: 0xc0970c4  jal         func_25C310
    ctx->pc = 0x3443F8u;
    SET_GPR_U32(ctx, 31, 0x344400u);
    ctx->pc = 0x3443FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443F8u;
    // 0x3443fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C310u, 0x3443F8u, 0x344400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344400u;
label_344400:
    // 0x344400: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x344400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344404: 0x0  nop
    ctx->pc = 0x344404u;
    // NOP
label_344408:
    // 0x344408: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x344408u;
    {
        const bool branch_taken_0x344408 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x344408) {
            ctx->pc = 0x3444A8u;
            goto label_3444a8;
        }
    }
    ctx->pc = 0x344410u;
    // 0x344410: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x344410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x344414: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x344414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x344418: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x344418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x34441c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34441Cu;
    {
        const bool branch_taken_0x34441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34441c) {
            ctx->pc = 0x344430u;
            goto label_344430;
        }
    }
    ctx->pc = 0x344424u;
    // 0x344424: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x344424u;
    {
        const bool branch_taken_0x344424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344424u;
        // 0x344428: 0xae200518  sw          $zero, 0x518($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344424) {
            ctx->pc = 0x3444B0u;
            goto label_3444b0;
        }
    }
    ctx->pc = 0x34442Cu;
    // 0x34442c: 0x0  nop
    ctx->pc = 0x34442cu;
    // NOP
label_344430:
    // 0x344430: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x344430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x344434: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x344434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x344438: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x344438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34443c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x34443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x344440: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x344440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x344444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344448: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x344448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34444c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x344450: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x344450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x344454: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x344454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x344458: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x344458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x34445c: 0x9463006a  lhu         $v1, 0x6A($v1)
    ctx->pc = 0x34445cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x344460: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x344460u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x344464: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x344464u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x344468: 0x0  nop
    ctx->pc = 0x344468u;
    // NOP
    // 0x34446c: 0x0  nop
    ctx->pc = 0x34446cu;
    // NOP
    // 0x344470: 0x1010  mfhi        $v0
    ctx->pc = 0x344470u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x344474: 0xa222058e  sb          $v0, 0x58E($s1)
    ctx->pc = 0x344474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1422), (uint8_t)GPR_U32(ctx, 2));
    // 0x344478: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x344478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x34447c: 0x9223058e  lbu         $v1, 0x58E($s1)
    ctx->pc = 0x34447cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1422)));
    // 0x344480: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344484: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x344488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34448c: 0xc0a22a8  jal         func_288AA0
    ctx->pc = 0x34448Cu;
    SET_GPR_U32(ctx, 31, 0x344494u);
    ctx->pc = 0x344490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34448Cu;
    // 0x344490: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AA0u, 0x34448Cu, 0x344494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344494u;
label_344494:
    // 0x344494: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344494u;
    {
        const bool branch_taken_0x344494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344494) {
            ctx->pc = 0x3444B0u;
            goto label_3444b0;
        }
    }
    ctx->pc = 0x34449Cu;
    // 0x34449c: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x34449cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3444a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3444A0u;
    {
        const bool branch_taken_0x3444a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3444A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444A0u;
        // 0x3444a4: 0xa222058e  sb          $v0, 0x58E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1422), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3444a0) {
            ctx->pc = 0x3444B0u;
            goto label_3444b0;
        }
    }
    ctx->pc = 0x3444A8u;
label_3444a8:
    // 0x3444a8: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x3444a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x3444ac: 0x0  nop
    ctx->pc = 0x3444acu;
    // NOP
label_3444b0:
    // 0x3444b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3444B0u;
    {
        const bool branch_taken_0x3444b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3444B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444B0u;
        // 0x3444b4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3444b0) {
            ctx->pc = 0x3444C0u;
            goto label_3444c0;
        }
    }
    ctx->pc = 0x3444B8u;
label_3444b8:
    // 0x3444b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3444b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3444bc: 0x0  nop
    ctx->pc = 0x3444bcu;
    // NOP
label_3444c0:
    // 0x3444c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3444c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3444c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3444c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3444c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3444c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3444cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3444ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3444d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3444d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3444d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3444d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3444d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3444d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3444dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3444dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3444e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3444e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3444e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3444E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3444E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444E4u;
        // 0x3444e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3444E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3444ECu;
}
