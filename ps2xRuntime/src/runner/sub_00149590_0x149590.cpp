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

// Function: sub_00149590
// Address: 0x149590 - 0x149734
void sub_00149590_0x149590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149590_0x149590");
#endif

    switch (ctx->pc) {
        case 0x1495e8u: goto label_1495e8;
        case 0x149708u: goto label_149708;
        default: break;
    }

    ctx->pc = 0x149590u;

    // 0x149590: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x149594: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x149594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x149598: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x149598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14959c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1495a0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1495a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1495a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1495a8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1495a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1495acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1495b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1495b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1495b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1495b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1495b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1495bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1495c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1495c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1495c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1495c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1495c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1495c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1495ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1495d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1495d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495d4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1495d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495d8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1495d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495dc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1495dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1495e0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1495E0u;
    SET_GPR_U32(ctx, 31, 0x1495E8u);
    ctx->pc = 0x1495E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495E0u;
    // 0x1495e4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1495E0u, 0x1495E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495E8u;
label_1495e8:
    // 0x1495e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1495e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495ec: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1495ECu;
    {
        const bool branch_taken_0x1495ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495ECu;
        // 0x1495f0: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495ec) {
            ctx->pc = 0x149708u;
            goto label_149708;
        }
    }
    ctx->pc = 0x1495F4u;
    // 0x1495f4: 0x26a30700  addiu       $v1, $s5, 0x700
    ctx->pc = 0x1495f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1792));
    // 0x1495f8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1495f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1495fc: 0x26820f20  addiu       $v0, $s4, 0xF20
    ctx->pc = 0x1495fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3872));
    // 0x149600: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x149604: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x149608: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x14960c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14960cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x149610: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x149610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149614: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x149618: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x14961c: 0x111d00  sll         $v1, $s1, 20
    ctx->pc = 0x14961cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
    // 0x149620: 0x34470116  ori         $a3, $v0, 0x116
    ctx->pc = 0x149620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)278);
    // 0x149624: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x149624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x149628: 0x101602  srl         $v0, $s0, 24
    ctx->pc = 0x149628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x14962c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x14962cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x149630: 0x2c430080  sltiu       $v1, $v0, 0x80
    ctx->pc = 0x149630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x149634: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x149634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x149638: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x149638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x14963c: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x14963cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x149640: 0xacb30024  sw          $s3, 0x24($a1)
    ctx->pc = 0x149640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 19));
    // 0x149644: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x149644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
    // 0x149648: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x149648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14964c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149650: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x149650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x149654: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x149654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x149658: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x149658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x14965c: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x14965cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x149660: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x149660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x149664: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x149664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149668: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x149668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x14966c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x149670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x149670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x149674: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x149678: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x149678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14967c: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x149680: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x149680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x149684: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x149684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x149688: 0xacb60010  sw          $s6, 0x10($a1)
    ctx->pc = 0x149688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 22));
    // 0x14968c: 0xa4b70014  sh          $s7, 0x14($a1)
    ctx->pc = 0x14968cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 23));
    // 0x149690: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149694: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149694u;
    {
        const bool branch_taken_0x149694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149694u;
        // 0x149698: 0xa4a40016  sh          $a0, 0x16($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149694) {
            ctx->pc = 0x1496A8u;
            goto label_1496a8;
        }
    }
    ctx->pc = 0x14969Cu;
    // 0x14969c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1496a0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1496A0u;
    {
        const bool branch_taken_0x1496a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1496a0) {
            ctx->pc = 0x1496F8u;
            goto label_1496f8;
        }
    }
    ctx->pc = 0x1496A8u;
label_1496a8:
    // 0x1496a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1496a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1496ac: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1496ACu;
    {
        const bool branch_taken_0x1496ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1496ac) {
            ctx->pc = 0x1496D0u;
            goto label_1496d0;
        }
    }
    ctx->pc = 0x1496B4u;
    // 0x1496b4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1496b8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1496b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1496bc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1496bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1496c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1496c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1496c4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1496c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1496c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1496C8u;
    {
        const bool branch_taken_0x1496c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496C8u;
        // 0x1496cc: 0xa0a0000f  sb          $zero, 0xF($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496c8) {
            ctx->pc = 0x1496E8u;
            goto label_1496e8;
        }
    }
    ctx->pc = 0x1496D0u;
label_1496d0:
    // 0x1496d0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1496d4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1496d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1496d8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1496d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1496dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1496dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1496e0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1496e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1496e4: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x1496e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
label_1496e8:
    // 0x1496e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1496e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1496ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1496ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1496f0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1496f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1496f4: 0x0  nop
    ctx->pc = 0x1496f4u;
    // NOP
label_1496f8:
    // 0x1496f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1496f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1496fc: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1496fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x149700: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x149700u;
    SET_GPR_U32(ctx, 31, 0x149708u);
    ctx->pc = 0x149704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149700u;
    // 0x149704: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x149700u, 0x149708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149708u;
label_149708:
    // 0x149708: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x149708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14970c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14970cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149710: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149714: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x149714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149718: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14971c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14971cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14972c: 0x3e00008  jr          $ra
    ctx->pc = 0x14972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14972Cu;
        // 0x149730: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149734u;
}
