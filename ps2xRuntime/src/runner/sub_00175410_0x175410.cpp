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

// Function: sub_00175410
// Address: 0x175410 - 0x175688
void sub_00175410_0x175410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175410_0x175410");
#endif

    switch (ctx->pc) {
        case 0x175484u: goto label_175484;
        case 0x17548cu: goto label_17548c;
        case 0x1754acu: goto label_1754ac;
        case 0x175558u: goto label_175558;
        case 0x17563cu: goto label_17563c;
        case 0x175660u: goto label_175660;
        default: break;
    }

    ctx->pc = 0x175410u;

    // 0x175410: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x175410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x175414: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x175414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x175418: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x175418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17541c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x175420: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x175424: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17542c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17542cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175434: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x175434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17543c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17543cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175444: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x175444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175448: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x175448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x17544c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x175450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175450u;
    {
        const bool branch_taken_0x175450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175450u;
        // 0x175454: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175450) {
            ctx->pc = 0x175460u;
            goto label_175460;
        }
    }
    ctx->pc = 0x175458u;
    // 0x175458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175458u;
    {
        const bool branch_taken_0x175458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175458u;
        // 0x17545c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175458) {
            ctx->pc = 0x175474u;
            goto label_175474;
        }
    }
    ctx->pc = 0x175460u;
label_175460:
    // 0x175460: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x175460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x175464: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x175464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x175468: 0x244252b0  addiu       $v0, $v0, 0x52B0
    ctx->pc = 0x175468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x17546c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175470: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x175470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_175474:
    // 0x175474: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x175474u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175478: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x175478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17547c: 0xc07435c  jal         func_1D0D70
    ctx->pc = 0x17547Cu;
    SET_GPR_U32(ctx, 31, 0x175484u);
    ctx->pc = 0x175480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17547Cu;
    // 0x175480: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D70u, 0x17547Cu, 0x175484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175484u;
label_175484:
    // 0x175484: 0xc07451c  jal         func_1D1470
    ctx->pc = 0x175484u;
    SET_GPR_U32(ctx, 31, 0x17548Cu);
    ctx->pc = 0x175488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175484u;
    // 0x175488: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1470u, 0x175484u, 0x17548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17548Cu;
label_17548c:
    // 0x17548c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x175490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175494: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x175494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x175498: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x175498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17549c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17549cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754a0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1754a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754a4: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x1754A4u;
    SET_GPR_U32(ctx, 31, 0x1754ACu);
    ctx->pc = 0x1754A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1754A4u;
    // 0x1754a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x1754A4u, 0x1754ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754ACu;
label_1754ac:
    // 0x1754ac: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1754acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1754b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1754b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1754b4: 0x2484bba0  addiu       $a0, $a0, -0x4460
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949792));
    // 0x1754b8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1754bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1754bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1754c0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1754c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1754c4: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x1754c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1754c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1754c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1754cc: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x1754ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1754d0: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1754d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
    // 0x1754d4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1754d8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1754dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1754e0: 0x85b021  addu        $s6, $a0, $a1
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1754e4: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x1754e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1754e8: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1754E8u;
    {
        const bool branch_taken_0x1754e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1754e8) {
            ctx->pc = 0x175588u;
            goto label_175588;
        }
    }
    ctx->pc = 0x1754F0u;
    // 0x1754f0: 0x92c40001  lbu         $a0, 0x1($s6)
    ctx->pc = 0x1754f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1754f4: 0x14820024  bne         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1754F4u;
    {
        const bool branch_taken_0x1754f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1754F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754F4u;
        // 0x1754f8: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754f4) {
            ctx->pc = 0x175588u;
            goto label_175588;
        }
    }
    ctx->pc = 0x1754FCu;
    // 0x1754fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1754fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175500: 0xa43004  sllv        $a2, $a0, $a1
    ctx->pc = 0x175500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x175504: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x175504u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x175508: 0xa62024  and         $a0, $a1, $a2
    ctx->pc = 0x175508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x17550c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17550Cu;
    {
        const bool branch_taken_0x17550c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17550Cu;
        // 0x175510: 0x30c4ffff  andi        $a0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17550c) {
            ctx->pc = 0x175528u;
            goto label_175528;
        }
    }
    ctx->pc = 0x175514u;
    // 0x175514: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x175514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x175518: 0xa6c4000a  sh          $a0, 0xA($s6)
    ctx->pc = 0x175518u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x17551c: 0x82c40003  lb          $a0, 0x3($s6)
    ctx->pc = 0x17551cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x175520: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x175524: 0xa2c40003  sb          $a0, 0x3($s6)
    ctx->pc = 0x175524u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 4));
label_175528:
    // 0x175528: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x175528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17552c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x17552cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x175530: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x175530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x175534: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x175534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x175538: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x175538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17553c: 0x2446000b  addiu       $a2, $v0, 0xB
    ctx->pc = 0x17553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x175540: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x175544: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x175548: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x17554c: 0x244252a0  addiu       $v0, $v0, 0x52A0
    ctx->pc = 0x17554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21152));
    // 0x175550: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x175550u;
    SET_GPR_U32(ctx, 31, 0x175558u);
    ctx->pc = 0x175554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175550u;
    // 0x175554: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x175550u, 0x175558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175558u;
label_175558:
    // 0x175558: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x175558u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x17555c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x17555cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175564: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x175568: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x175568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x17556c: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x17556cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
    // 0x175570: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x175570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175578: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17557c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17557Cu;
    {
        const bool branch_taken_0x17557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17557Cu;
        // 0x175580: 0xac73001c  sw          $s3, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17557c) {
            ctx->pc = 0x175660u;
            goto label_175660;
        }
    }
    ctx->pc = 0x175584u;
    // 0x175584: 0x0  nop
    ctx->pc = 0x175584u;
    // NOP
label_175588:
    // 0x175588: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x175588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17558c: 0x9022cc70  lbu         $v0, -0x3390($at)
    ctx->pc = 0x17558cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CC70u));
    // 0x175590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175590u;
    {
        const bool branch_taken_0x175590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175590u;
        // 0x175594: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175590) {
            ctx->pc = 0x1755A0u;
            goto label_1755a0;
        }
    }
    ctx->pc = 0x175598u;
    // 0x175598: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175598u;
    {
        const bool branch_taken_0x175598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175598u;
        // 0x17559c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175598) {
            ctx->pc = 0x1755BCu;
            goto label_1755bc;
        }
    }
    ctx->pc = 0x1755A0u;
label_1755a0:
    // 0x1755a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1755a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1755a4: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x1755a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
    // 0x1755a8: 0xa024cc70  sb          $a0, -0x3390($at)
    ctx->pc = 0x1755a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CC70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81CC70u, _value); } while (0);
    // 0x1755ac: 0x2442cc30  addiu       $v0, $v0, -0x33D0
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954032));
    // 0x1755b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1755b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1755b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1755b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1755b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1755b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1755bc:
    // 0x1755bc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1755bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1755c0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1755c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1755c4: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1755c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1755c8: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x1755c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1755cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1755ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1755d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1755d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1755d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1755d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1755d8: 0x3c030082  lui         $v1, 0x82
    ctx->pc = 0x1755d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)130 << 16));
    // 0x1755dc: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1755dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1755e0: 0x2463b1a0  addiu       $v1, $v1, -0x4E60
    ctx->pc = 0x1755e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947232));
    // 0x1755e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1755e8: 0x67a021  addu        $s4, $v1, $a3
    ctx->pc = 0x1755e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1755ec: 0xc41804  sllv        $v1, $a0, $a2
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x1755f0: 0xa683000a  sh          $v1, 0xA($s4)
    ctx->pc = 0x1755f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1755f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1755f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x1755f8: 0xa2840003  sb          $a0, 0x3($s4)
    ctx->pc = 0x1755f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1755fc: 0x246352a0  addiu       $v1, $v1, 0x52A0
    ctx->pc = 0x1755fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21152));
    // 0x175600: 0xa2920000  sb          $s2, 0x0($s4)
    ctx->pc = 0x175600u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x175604: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x175604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x175608: 0xa2910001  sb          $s1, 0x1($s4)
    ctx->pc = 0x175608u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x17560c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x17560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x175610: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x175614: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x175614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x175618: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x175618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x17561c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175620: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x175620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x175624: 0x2446000b  addiu       $a2, $v0, 0xB
    ctx->pc = 0x175624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x175628: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x175628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17562c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17562cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x175630: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x175630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x175634: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x175634u;
    SET_GPR_U32(ctx, 31, 0x17563Cu);
    ctx->pc = 0x175638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175634u;
    // 0x175638: 0xac53001c  sw          $s3, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x175634u, 0x17563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17563Cu;
label_17563c:
    // 0x17563c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x17563cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x175640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x175640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175644: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x175644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x175648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17564c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x175650: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x175650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x175654: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x175658: 0xc049522  jal         func_125488
    ctx->pc = 0x175658u;
    SET_GPR_U32(ctx, 31, 0x175660u);
    ctx->pc = 0x17565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175658u;
    // 0x17565c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x175658u, 0x175660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175660u;
label_175660:
    // 0x175660: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x175660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x175664: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x175664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x175668: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x175668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17566c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17566cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17567c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175680: 0x3e00008  jr          $ra
    ctx->pc = 0x175680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175680u;
        // 0x175684: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175688u;
}
